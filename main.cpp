#include <iostream>

int main(int argc, char const *argv[])
{
  auto result = (10 <=> 20) > 0;
  std::cout << result << std::endl;
  return 0;
}
