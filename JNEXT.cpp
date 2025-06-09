#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef unsigned int UINT;

int JNEXT()
{
  UINT T;
  cin >> T;
  for (UINT i = 0; i < T; ++i) {
    UINT N;
    cin >> N;
    vector<UINT> IN(N);
    for (UINT j = 0; j < N; ++j)
    {
      cin >> IN[j];
    }
    vector<UINT> OUT = IN;
    for (UINT j = 0; j < N; ++j)
    {
      
    }
    for (vector<UINT>::reverse_iterator it = OUT.rbegin(); it != OUT.rend(); ++it)
    {
      if (*it > *(it+1))
      {
        swap(*it, *(it+1));
        sort(it+2, OUT.rend());
        break;     
      }
    }
    for (vector<UINT>::const_iterator it = OUT.begin(); it != OUT.end(); ++it)
    {
      cout << *it;
    }
    cout << "\n";
  }
  return 0;
}