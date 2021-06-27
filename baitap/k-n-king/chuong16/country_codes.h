#ifndef COUNTRY_CODES_H_
#define COUNTRY_CODES_H_

struct dialing_code {
  char *country;
  int code;
};

extern const struct dialing_code country_codes[];

int get_codes_size();

#endif  // COUNTRY_CODES_H_