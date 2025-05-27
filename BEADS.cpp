#include <iostream>
#include <string>
#include <queue>
using namespace std;

typedef unsigned int UINT;
typedef queue<char> Q;

bool isSmaller(Q a, Q b)
{
  while (!a.empty())
  {
    if (a.front() < b.front())
    {
      return true;
    }
    if (a.front() > b.front())
    {
      return false;
    }
    a.pop();
    b.pop();
  }
  return false;
}

void BEADS_calculateAndPrint(const Q& A)
{
  Q smallest = A;
  Q test = A;
  UINT result = 0;
  for (UINT i = 0; i < A.size(); i++)
  {
    if (isSmaller(test, smallest))
    {
      smallest = test;
      result = i;
    }
    char c = test.front();
    test.pop();
    test.push(c);
  }
  cout << result + 1 << "\n";
}


int BEADS()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    string in;
    cin >> in;
    Q A;
    for (char c : in)
    {
      A.push(c);
    }
    BEADS_calculateAndPrint(A);
  }
  return 0;
}
