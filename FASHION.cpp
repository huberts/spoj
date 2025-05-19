#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void FASHION_calculateAndPrint(vector<int>& males, vector<int>& females)
{
  std::sort(males.begin(), males.end());
  std::sort(females.begin(), females.end());
  int result = 0;
  for (int i = 0; i < males.size(); ++i)
  {
    result += males[i] * females[i];
  }
  cout << result << "\n";
}

int FASHION()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i)
  {
    int n;
    cin >> n;
    vector<int> males(n, 0);
    vector<int> females(n, 0);
    for (int j = 0; j < n; ++j)
    {
      cin >> males[j];
    }
    for (int j = 0; j < n; ++j)
    {
      cin >> females[j];
    }
    FASHION_calculateAndPrint(males, females);
  }
  return 0;
}