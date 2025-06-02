#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef unsigned long ULONG;

int HPYNOS()
{
  ULONG T;
  cin >> T;
  std::vector<ULONG> TTs;
  int N = 0;
  while (true)
  {
    if (T == 1)
    {
      break;
    }
    N++;
    ULONG newT = 0;
    ULONG TT = T;
    while (TT > 0)
    {
      ULONG digit = TT % 10;
      newT += digit * digit;
      TT /= 10;
    }
    if (find(TTs.begin(), TTs.end(), newT) != TTs.end())
    {
      N = -1;
      break;
    }
    TTs.push_back(newT);
    T = newT;
  }
  cout << N << "\n";
  return 0;
}