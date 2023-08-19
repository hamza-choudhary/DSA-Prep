#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int counter = 0;

    int check;
    if (ruleKey == "type")
      check = 0;
    else if (ruleKey == "color")
      check = 1;
    else // rule key == name
      check = 2;

    for (int i=0; i<items.size(); i++)
    {
      if (items[i][check] == ruleValue)
        counter++;
    }

    return counter;
  }
};

int main()
{
  Solution s = Solution();
  vector<vector<string>> items = {{"phone","blue","pixel"},{"computer","silver","phone"},{"phone","gold","iphone"}};
  cout << s.countMatches(items, "type", "phone");

  return 0;
}