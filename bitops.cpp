#include <iostream>

bool getBit(unsigned int x, int n) {
  if (x & (1u << n)) {
    return true;
  }
  return false;
}

int main() {
  std::cout << std::boolalpha;
  std::cout << getBit(5, 0) << std::endl;
  return 0;
}
