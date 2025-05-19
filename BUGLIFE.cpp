#include <iostream>
#include <vector>
using namespace std;

struct Interaction
{
  int bug1; int bug2;
};

void BUGLIFE_CalculateAndPrint(vector<char>& bugSexes, const vector<Interaction>& interactionsData)
{
  for (const auto& interaction : interactionsData)
  {
    int bug1 = interaction.bug1;
    int bug2 = interaction.bug2;
    if (bugSexes[bug1] == 'M' && bugSexes[bug2] == 'U')
    {
      bugSexes[bug2] = 'F';
    }
    else if (bugSexes[bug1] == 'F' && bugSexes[bug2] == 'U')
    {
      bugSexes[bug2] = 'M';
    }
    else if (bugSexes[bug1] == 'U' && bugSexes[bug2] == 'M')
    {
      bugSexes[bug1] = 'F';
    }
    else if (bugSexes[bug1] == 'U' && bugSexes[bug2] == 'F')
    {
      bugSexes[bug1] = 'M';
    }
    else if (bugSexes[bug1] == 'M' && bugSexes[bug2] == 'M' || bugSexes[bug1] == 'F' && bugSexes[bug2] == 'F')
    {
      cout << "Suspicious bugs found!" << "\n";
      return;
    }
  }
  cout << "No suspicious bugs found!" << "\n"; 
}

int BUGLIFE()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i)
  {
    int bugs, interactions;
    cin >> bugs >> interactions;
    vector<char> bugSexes(bugs + 1, 'U'); ///D - dont'care; U - uknown; M - male; F - female
    bugSexes[0] = 'D';
    bugSexes[1] = 'M';
    vector<Interaction> interactionsData;
    for (int j = 0; j < interactions; ++j)
    {
      Interaction interaction;
      cin >> interaction.bug1 >> interaction.bug2;
      interactionsData.push_back(interaction);
    }
    cout << "Scenario #" << i + 1 << ":" << "\n";
    BUGLIFE_CalculateAndPrint(bugSexes, interactionsData);
  }
  return 0;
}