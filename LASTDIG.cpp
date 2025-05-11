#include <iostream>

using namespace std;

typedef unsigned int UINT;
typedef unsigned long ULONG;

void LASTDIG_calculateAndPrint(ULONG a, ULONG b)
{
  UINT result = 0;
  if (b == 0) {
    result = 1;
  }
  else
  {
    switch (a % 10)
    {
      case 0: result = 0; break;
      case 1: result = 1; break;
      case 2:
        switch (b % 4)
        {
          case 0: result = 6; break;
          case 1: result = 2; break;
          case 2: result = 4; break;
          case 3: result = 8; break;
        }
        break;
      case 3:
        switch (b % 4)
        {
          case 0: result = 1; break;
          case 1: result = 3; break;
          case 2: result = 9; break;
          case 3: result = 7; break;
        }
        break;
      case 4:
        switch (b % 2)
        {
          case 0: result = 6; break;
          case 1: result = 4; break;
        }
        break;
      case 5: result = 5; break;
      case 6: result = 6; break;
      case 7:
        switch (b % 4)
        {
          case 0: result = 1; break;
          case 1: result = 7; break;
          case 2: result = 9; break;
          case 3: result = 3; break;
        }
        break;
      case 8:
        switch (b % 4)
        {
          case 0: result = 6; break;
          case 1: result = 8; break;
          case 2: result = 4; break;
          case 3: result = 2; break;
        }
        break;
      case 9:
        switch (b % 2)
        {
          case 0: result = 1; break;
          case 1: result = 9; break;
        }
        break;
    }
  }
  cout << result << "\n"; 
}

int LASTDIG()
{
  UINT t;
  cin >> t;
  for (UINT i = 0; i < t; ++i) {
    ULONG a, b;
    cin >> a >> b;
    LASTDIG_calculateAndPrint(a, b);
  }
  return 0;
}
