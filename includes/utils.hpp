#ifndef UTILS_HPP_
#define UTILS_HPP_

#include <string>
#include <exception>
#include <iostream>
#include <sstream>

class MyException : public std::exception {
public:
  MyException(const std::string & type, const std::string & Msg);
  virtual ~MyException() throw() {}
  virtual const char * what() const throw() {
    return _msg.c_str();
  }
private:
  std::string _msg;
};

/* give the position of the character in the string or -1 on error */
template <typename T>
int my_isin(char c, T str);

/* replace all tabs by spaces and remove unnecessary spaces */
void  epur_str(std::string & str);

/* color a string for output */
template <typename T>
void c_str(T str, char color, int thick = 0);

#endif
