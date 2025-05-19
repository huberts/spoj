#include <iostream>
using namespace std;

typedef unsigned long long ULLONG;

void AP2_calculateAndPrint(ULLONG A, ULLONG B, ULLONG S)
{
  ULLONG n = 2 * S / (A + B);
  ULLONG r = (B - A) / (n - 5);
  ULLONG a = A - 2 * r;
  cout << n << "\n";
  for (ULLONG i = 0; i < n; ++i)
  {
    cout << a;
    if (i < n - 1)
    {
      cout << " ";
      a += r;
    }
    else
    {
      cout << "\n";
    }
  }
}

int AP2()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i)
  {
    ULLONG A, B, S;
    cin >> A >> B >> S;
    AP2_calculateAndPrint(A, B, S);
  }
  return 0;
}