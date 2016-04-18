#include <iostream>
#include "utils.hpp"

void	c_str(const std::string & str, char color, int thick) {
  static std::string colors("rgybpcew");
  size_t tmp = colors.find(color);
  
  if (tmp != std::string::npos) {
    std::cout << "\033[" << thick << ";3" << tmp + 1 << "m" << str << "\033[0;0m";
  } else {
    std::cout << str;
  }
}
