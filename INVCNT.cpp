#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef unsigned int UINT;
typedef vector<UINT> V;

void INVCNT_CalculateAndPrint(V& A)
{
  UINT result = 0;
  for (UINT i = 0; i < A.size(); ++i)
  {
    for (UINT j = i+1; j < A.size(); ++j)
    {
      if (A[i] > A[j])
      {
        result++;
      }
    }
  }
  cout << result << "\n";
}

int INVCNT()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int n;
    cin >> n;
    V A(n);
    for (int j = 0; j < n; ++j)
    {
      cin >> A[j];
    }
    INVCNT_CalculateAndPrint(A);
  }
  return 0;
}