#include <iostream>
#include <string>
#include "proto/message.pb.h"

using namespace std;
int main(int argc, char const *argv[])
{
  message::Message m;
  m.add_id(std::string("123"));
  std::cout << "Hello proto" << std::endl;
  return 0;
}
