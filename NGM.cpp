#include <iostream>
using namespace std;

typedef unsigned long long ULLONG;

void NGM_CalculateAndPrint(ULLONG n)
{
  if (n % 10 > 0)
  {
    cout << 1 << "\n";
    cout << n % 10 << "\n";
  }
  else
  {
    cout << 2 << "\n";
  }
}

int NGM()
{
  int n;
  cin >> n;
  NGM_CalculateAndPrint(n);
  return 0;
}