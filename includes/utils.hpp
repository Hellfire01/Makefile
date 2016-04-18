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

/* epur */
void  epur_str(std::string & str);

void c_str(const std::string & str, char color, int thick = 0);

#endif
