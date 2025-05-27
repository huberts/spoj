#include <iostream>
#include <string>
#include <queue>
using namespace std;

int min_cyc(string s)
{
  int n = s.size();
  s += s;

  int res = 0;
  for (int l = 0; l < n; )
  {
    res = l;
    int r = l, p = l + 1;
    for (; p < s.size() && s[r] <= s[p]; ++r, ++p)
      if (s[r] < s[p]) r = l - 1;

    while (l <= r) l += p - r;
  }

  return res + 1;
}


int BEADS()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    string s;
    cin >> s;
    cout << min_cyc(s) << "\n";
  }
  return 0;
}
