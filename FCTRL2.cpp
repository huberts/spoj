#include <iostream>
#include <vector>

using namespace std;

typedef unsigned int UINT;

void FCTRL2_calculateAndPrint(double n)
{
  const UINT SIZE = 300;
  vector<UINT> result(SIZE, 0);
  result[0] = 1;
  UINT zeros = 0;
  for (UINT i = 1; i <= n; ++i)
  {
    if (i == 100)
    {
      zeros += 2;
      continue;
    }
    UINT a = i % 10;
    UINT b = i / 10;
    UINT toMoveA = 0;
    UINT toMoveB = 0;
    vector<UINT> va(SIZE, 0);
    vector<UINT> vb(SIZE, 0);
    for (UINT j = 0; j < SIZE; ++j)
    {
      UINT x = result[j] * a + toMoveA;
      va[j] = x % 10;
      toMoveA = x / 10;
    }
    if (b > 0)
    {
      for (UINT j = 0; j < SIZE; ++j)
      {
        UINT x = result[j] * b + toMoveB;
        vb[j] = x % 10;
        toMoveB = x / 10;
      }
    }
    UINT toMove = 0;
    result[0] = va[0];
    for (UINT j = 1; j < SIZE-1; ++j)
    {
      UINT x = va[j] + vb[j-1] + toMove;
      result[j] = x % 10;
      toMove = x / 10;
    }
  }
  bool print = false;
  for (vector<UINT>::const_reverse_iterator it = result.rbegin(); it != result.rend(); ++it)
  {
    if (!print && *it > 0)
    {
      print = true;
    }
    if (print)
    {
      cout << *it;
    }
  }
  for (UINT i = 0; i < zeros; ++i)
  {
    cout << '0'; 
  }
  cout << "\n";
}

int FCTRL2()
  {
    int count;
    cin >> count;
    for (int i = 0; i < count; ++i) {
        int n;
        cin >> n;
        FCTRL2_calculateAndPrint(n);
    }
    return 0;
}
