/*
Output binary representation of a value
@bangoc 2021
*/
#include "bin_helper.h"


typedef char *char_ptr;
typedef char_ptr (*get_binary_t)();
#define MAX_IMPL 1000
static char* impl_names[MAX_IMPL];
static get_binary_t impl_handlers[MAX_IMPL];
static int impl_count = 0;

static void register_handler(char *name, get_binary_t func) {
  impl_names[impl_count] = name;
  impl_handlers[impl_count] = func;
  ++impl_count;
}

#define register_impl(type) register_handler(#type, get_ ##type##_binary)

static get_binary_t get_handler(const char *name) {
  for (int i = 0; i < impl_count; ++i) {
    if (strcmp(impl_names[i], name) == 0) {
      return impl_handlers[i];
    }
  }
  return NULL;
}

#define IMPL(type) \
static char *get_ ##type##_binary(const char *inp) { \
  const edian_type edian = get_edian(); \
  long double tmp; \
  sscanf(inp, "%Lf", &tmp); \
  type value = (type)tmp; \
  void *p = (void*)&value; \
  return get_object_binary(p, sizeof(type), edian); \
}

IMPL(char)
IMPL(short)
IMPL(int)
IMPL(float)
IMPL(double)

void register_all() {
  register_impl(char);
  register_impl(short);
  register_impl(int);
  register_impl(float);
  register_impl(double);
}

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Usage: ./binary type numeric_value\n"
           "Supported types are char, short, int, float, double\n");
    return 1;
  }
  register_all();
  get_binary_t handler = get_handler(argv[1]);
  if (handler) {
    printf("%s\n", handler(argv[2]));
  } else {
    printf("Unknown type.\n");
  }
  return 0;
}