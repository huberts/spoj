#include <iostream>
using namespace std;

void HANGOVER_calculateAndPrint(float c)
{
  int result = 0;
  float work = 0.0;
  while (c > work)
  {
    result++;
    work += (float)1.0 / float(result + 1);
  }
  cout << result << " card(s)\n";
}

int HANGOVER()
{
  float c;
  while (cin >> c)
  {
    if (abs(c) <= 0.000001)
    {
      break;
    }
    HANGOVER_calculateAndPrint(c);
  }
  return 0;
}