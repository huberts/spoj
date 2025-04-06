#include <iostream>
#include <cmath>

unsigned int calculate_z_10(unsigned long n, unsigned int ex) {
  unsigned long tenPow = pow(10, ex);
  unsigned long twoPow = pow(2, ex);
  unsigned long part = tenPow / twoPow;
  unsigned long ending = n % tenPow;
  unsigned int result = 0;
  for (unsigned i = 1; i <= twoPow; ++i) {
    result += n / tenPow;
    if (ending >= (i * part)) {
      result++;
    }
  }
  return result;
}

unsigned int calculate_z(unsigned long n) {
  return
    calculate_z_10(n, 1) +
    calculate_z_10(n, 2) +
    calculate_z_10(n, 3) +
    calculate_z_10(n, 4) +
    calculate_z_10(n, 5) +
    calculate_z_10(n, 6) +
    calculate_z_10(n, 7) +
    calculate_z_10(n, 8) +
    calculate_z_10(n, 9) +
    calculate_z_10(n, 10);
}


int FCTRL_main() { ///TODO:
  int count;
  scanf("%d", &count);
  for (int i = 0; i < count; ++i) {
    unsigned long n;
    scanf("%lu", &n);
    unsigned int z = calculate_z(n);
    printf("%d\n", z);
  }
  return 0;
}