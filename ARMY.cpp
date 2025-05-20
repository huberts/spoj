#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void ARMY_CalculateAndPrint(vector<int>& ngs, vector<int>& nms)
{
  std::sort(ngs.begin(), ngs.end());
  std::sort(nms.begin(), nms.end());
  while (true)
  {
    if (ngs.empty() || nms.empty())
    {
      break;
    }
    if (ngs.back() >= nms.back())
    {
      nms.pop_back();
    }
    else
    {
      ngs.pop_back();
    }
  }
  if (!ngs.empty() && nms.empty())
  {
    cout << "Godzilla" << "\n";
  }
  else if (ngs.empty() && !nms.empty())
  {
    cout << "MechaGodzilla" << "\n";
  }
  else
  {
    cout << "uncertain" << "\n";
  }
}

int ARMY()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int ng, nm;
    cin >> ng >> nm;
    vector<int> ngs(ng);
    for (int j = 0; j < ng; ++j)
    {
      cin >> ngs[j];
    }
    vector<int> nms(nm);
    for (int j = 0; j < nm; ++j)
    {
      cin >> nms[j];
    }
    ARMY_CalculateAndPrint(ngs, nms);
  }
  return 0;
}