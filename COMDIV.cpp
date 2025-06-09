#include <iostream>
#include <cmath>
using namespace std;

typedef unsigned int UINT;

UINT GCD(UINT a, UINT b)
{
  while (b != 0)
  {
    UINT t = b;
    b = a % b;
    a = t;
  }
  return a;
}

void COMDIV_calculateAndPrint(UINT a, UINT b)
{
  UINT first = min(a, b);
  UINT second = max(a, b);
  UINT sqrtFirst = static_cast<UINT>(sqrt(first));
  UINT gcd = GCD(first, second);
  UINT divisorsCount = 0;
  if (sqrtFirst < gcd)
  {
    for (UINT i = 1; i <= sqrtFirst; ++i)
    {
      if (first % i == 0 && second % i == 0)
      {
        divisorsCount += 2;
      }
    }
    if (sqrtFirst * sqrtFirst == first)
    {
      divisorsCount--;
    }
  } else
  {
    for (UINT i = 1; i <= gcd; ++i)
    {
      if (first % i == 0 && second % i == 0)
      {
        divisorsCount++;
      }
    }
  }
   cout << divisorsCount << "\n";
}


int COMDIV()
{
  UINT T;
  cin >> T;
  for (UINT i = 0; i < T; ++i) {
    UINT a, b;
    cin >> a >> b;
    COMDIV_calculateAndPrint(a, b);
  }
  return 0;
}