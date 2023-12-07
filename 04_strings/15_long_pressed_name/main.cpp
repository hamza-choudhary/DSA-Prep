#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool isLongPressedName(string name, string typed)
  {

    int i = 0, j = 0;

    while (j < typed.size())
    {
      // i < name.size() prevents out of bounds
      if (i < name.size() && name[i] == typed[j])
      {
        i++;
      }
      else if (j == 0 || typed[j] != typed[j - 1])
      {
        return false;
      }

      j++;
    }
    
    return i == name.size();
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<string> word1 = {"ab", "c"};
  // vector<string> arr = {"a","abc","bc","d"};

  cout << s.isLongPressedName("saeed", "ssaaedd") << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}