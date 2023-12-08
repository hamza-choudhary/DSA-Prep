#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool checkOnesSegment(string s)
  {

    for (int i = 1; i < s.size(); i++)
    {
      if (s[i] == '1' && s[i - 1] == '0')
      {
        return false;
      }
    }

    return true;
  }
};

//! Solution 2 (beats 100% in memory)
// class Solution
// {
// public:
//   bool checkOnesSegment(string s)
//   {
//     // string val = "01";
//     if (s.find("01") == -1)
//       return true;
//     return false;
//   }
// };

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<string> word1 = {"ab", "c"};
  // vector<string> arr = {"flower", "flow", "flight"};

  cout << s.checkOnesSegment("aaabaaaabaaabaaaabaaaabaaaabaaaaba") << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}