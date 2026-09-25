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

unsigned int clearBit(unsigned int x, int n) {
  return x & ~(1u << n);
}

unsigned int toggleBit(unsigned int x, int n) {
  return x ^ (1u << n);
}

int countOnes(unsigned int x) {
  int count = 0;
  for (int n = 0; n <= 31; n++) {
    if (x & (1u << n)) {
      count++;
    }
  }
  return count;
}

int main() {
  std::cout << std::boolalpha;
  std::cout << "getBit(5, 0): " << getBit(5, 0) << std::endl;
  std::cout << "setBit(0, 3): " << setBit(0, 3) << std::endl;
  std::cout << "clearBit(15, 0): " << clearBit(15, 0) << std::endl;
  std::cout << "toggleBit(10, 1): " << toggleBit(10, 1) << std::endl;
  std::cout << "countOnes(255): " << countOnes(255) << std::endl;
  return 0;
}
