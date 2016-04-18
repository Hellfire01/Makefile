#include <iostream>
#include "utils.hpp"

/*
 * colors are :
 * r = red
 * g = green
 * y = yelow
 * b = blue
 * p = purple
 * c = cyan
 * e = grey
 * w = white
 *
 * int thick defines the thickness of the writing
 */

template void c_str<char *>(char * str, char color, int thick);
template void c_str<const char *>(const char * str, char color, int thick);
template void c_str<std::string &>(std::string & str, char color, int thick);
template void c_str<const std::string &>(const std::string & str, char color, int thick);

template <typename T>
void	c_str(T str, char color, int thick) {
  int tmp = my_isin(color, "rgybpcew") + 1;
  
  if (tmp > 0 && tmp < 9) {
    std::cout << "\033[" << thick << ";3" << tmp << "m" << str << "\033[0;0m";
  } else {
    std::cout << str;
  }
}
