#include <cstdlib>
#include <string>

std::string uidgen() {
  std::string uid = "1.4.444.90004.223.";
  unsigned int suffix = std::rand() * std::rand();
  std::string sufStr = std::to_string(suffix)
  return uid + sufStr.substr(0,5) + "." + sufStr.substr(5,5) ;
}


