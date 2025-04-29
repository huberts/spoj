#include <iostream>
#include <vector>

using namespace std;

typedef unsigned int UINT;

void NSTEPS_calculateAndPrint(int x, int y)
{
  int result = -1;
  if (x == y && x >= 0)
  {
    result = 2 * x;
    if (x % 2 == 1)
    {
      result -= 1;
    }
  }
  if (x == y + 2)
  {
    result = x + y;
    if (x % 2 == 1)
    {
      result -= 1;
    }
  }
  if (result == -1)
  {
    cout << "No Number" << "\n";
  }
  else
  {
    cout << result << "\n"; 
  }
}

int NSTEPS()
{
  UINT count;
  cin >> count;
  for (UINT i = 0; i < count; ++i) {
    int x, y;
    cin >> x >> y;
    NSTEPS_calculateAndPrint(x, y);
  }
  return 0;
}
