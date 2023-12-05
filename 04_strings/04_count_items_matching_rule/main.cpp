#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
  {
    int propertyIdx = 0;
    if (ruleKey == "type")
      propertyIdx = 0;
    else if (ruleKey == "color")
      propertyIdx = 1;
    else // ruleKey == "name"
      propertyIdx = 2;

    int count = 0;

    for (int i = 0; i < items.size(); i++)
    {
      if (items[i][propertyIdx] == ruleValue)
      {
        count++;
      }
    }

    return count;
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  vector<vector<string>> items = {{"phone", "blue", "pixel"}, {"computer", "silver", "lenovo"}, {"phone", "gold", "iphone"}};

  cout << s.countMatches(items, "color", "silver") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}