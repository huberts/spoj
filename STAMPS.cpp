#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void STAMPS_calculateAndPrint(int count, vector<int>& collections)
{
  std::sort(collections.begin(), collections.end());
  int sum = 0;
  int result = 0;
  for (vector<int>::const_reverse_iterator it = collections.rbegin(); it != collections.rend(); ++it)
  {
    if (sum >= count)
    {
      break;
    }
    sum += *it;
    result++;
  }
  if (sum >= count)
  {
    cout << result << "\n" << "\n";
  }
  else
  {
    cout << "impossible" << "\n" << "\n";
  }
}

int STAMPS()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i)
  {
    int count, persons;
    cin >> count >> persons;
    vector<int> collections(persons);
    for (int j = 0; j < persons; ++j)
    {
      cin >> collections[j];
    }
   cout << "Scenario #" << (i+1) << ":" << "\n";
   STAMPS_calculateAndPrint(count, collections);
  }
  return 0;
}