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

bool isPowerOfTwo(unsigned int x) {
  int count = 0;
  for (int n = 0; n <= 31; n++) {
    if (x & (1u << n)) {
      count++;
    }
  }
  if (count == 1) {
    return true;
  }
  return false;
}
