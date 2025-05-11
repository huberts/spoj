#include <iostream>
#include <cmath>
typedef unsigned long ULONG;
void LASTDIG_CalculateAndPrint(ULONG a, ULONG b)
{
  int r = a % 10;
  if (b == 0) r = 1;
  else {
    if(a%10==2||a%10==3||a%10==7||a%10==8) r=(int)pow(a%10,b%4+4)%10;
    if (a%10==4||a%10==9) r=(int)pow(a%10,b%2+2)%10;
  }
  std::cout << r << "\n"; 
}

int LASTDIG()
{
  int t;
  std::cin >> t;
  for (int i = 0; i < t; ++i) {
    ULONG a, b;
    std::cin >> a >> b;
    LASTDIG_CalculateAndPrint(a, b);
  }
  return 0;
}
