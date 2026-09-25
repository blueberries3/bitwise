#include <iostream>

bool getBit(unsigned int x, int n) {
  if (x & (1u << n)) {
    return true;
  }
  return false;
}

unsigned int setBit(unsigned int x, int n) {
  return x | (1u << n);
}

int main() {
  std::cout << std::boolalpha;
  std::cout << "getBit(5, 0): " << getBit(5, 0) << std::endl;
  std::cout << "setBit(0, 3): " << setBit(0, 3) << std::endl;
  return 0;
}
