#include "utils.hpp"

MyException::MyException(const std::string & type, const std::string & Msg) {
    std::ostringstream oss;
    oss << "\033[1;31mError type : " << type << "\033[0;33m\n" << Msg << "\033[0;0m" << std::endl;
    _msg = oss.str();
}
