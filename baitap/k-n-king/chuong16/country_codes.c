#include "country_codes.h"

const struct dialing_code country_codes[] =
  {{"Argentina",     54},   {"Bangladesh",    880},
   {"Brazil",        55},   {"Myanmar",        95},
   {"Trung Quốc",    86},   {"Colombia",       57},
   {"CHDC Công-gô", 243},   {"Ai Cập",         20},
   {"Ethiopia",     251},   {"Pháp",           33},
   {"Đức",           49},   {"Ấn Độ",          91},
   {"Indonesia",     62},   {"Iran",           98},
   {"Ý",             39},   {"Nhật",           81},
   {"Mexico",        52},   {"Nigeria",       234},
   {"Pakistan",      92},   {"Philippines",    63},
   {"Ba Lan",        48},   {"Nga",             7},
   {"Nam Phi",       27},   {"Hàn Quốc",       82},
   {"Tây Ban Nha",   34},   {"Sudan",         249},
   {"Thái Lan",      66},   {"Thổ Nhĩ Kỳ",     90},
   {"Ukraine",      380},   {"Liên Hiệp Anh",  44},
   {"Mỹ",             1},   {"Việt Nam",       84}};

int get_codes_size() {
  return sizeof(country_codes)/sizeof(country_codes[0]);
}