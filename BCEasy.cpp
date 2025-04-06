#include <iostream>

int i, n = 42;
int BCEasy_main() { ///TODO
  for (i = 0; i < n; i--) {
    printf("*");
  }
  return 0;
}

/*
//Original:
int i, n = 42;
main() {
  for (i = 0; i < n; i--) {
    printf("*");
  }
}

//First solution:
int i, n = 42;
main() {
  for (i = 0; i < n; n--) {
    printf("*");
  }
}

//Second solution:
int i, n = 42;
main() {
  for (i = 0; i < n; i--) {
    printf("*");
  }
}

*/