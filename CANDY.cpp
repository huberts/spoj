#include <iostream>
#include <vector>
using namespace std;

void CANDY_CalculateAndPrint(vector<int> candies)
{
  int sum = 0;
  for (const auto& candy : candies)
  {
    sum += candy;
  }
  if (sum % candies.size() != 0)
  {
    cout << -1 << "\n";
    return;
  }
  int average = sum / candies.size();
  int moves = 0;
  for (const auto& candy : candies)
  {
    if (candy > average)
    {
      moves += candy - average;
    }
  }
  cout << moves << "\n";
}

int CANDY()
{
  int n;
  while (cin >> n)
  {
    if (n == -1) break;
    vector<int> candies(n, 0);
    for (int i = 0; i < n; ++i)
    {
      cin >> candies[i];
    }
    CANDY_CalculateAndPrint(candies);
  }
  return 0;
}