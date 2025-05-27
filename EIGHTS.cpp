#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long ULLONG;
typedef vector<ULLONG> V;

static V v;

void EIGHTS_prepare()
{
  for (ULLONG i = 1; i < 10000; i++)
  {
    if (i % 10 == 2)
    {
      ULLONG n = i * i * i;
      if (n % 1000 == 888)
      {
        v.push_back(i);
      }
    }
  }
}


void EIGHTS_calculateAndPrint(ULLONG k)
{
  ULLONG fullVectors = (k - 1) / v.size();
  ULLONG result = 10000 * fullVectors + v[(k - 1) % v.size()];
  cout << result << "\n";
}

int EIGHTS()
{
  EIGHTS_prepare();
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    ULLONG k;
    cin >> k;
    EIGHTS_calculateAndPrint(k);
  }
  return 0;
}
