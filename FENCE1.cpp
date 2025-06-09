#include <iostream>
#include <iomanip>
using namespace std;

int FENCE1()
{
  const double M_1_PI = 0.31830988618379067153776752674503;
  int L;
  while (true)
  {
    cin >> L;
    if (L == 0)
    {
      break;
    }
    const double result = L * L * M_1_PI / 2.0;
    cout << fixed << setprecision(2) << result << "\n";
  }
  return 0;
}