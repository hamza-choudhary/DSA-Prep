#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int strStr(string haystack, string needle)
  {

    for (int i = 0; i < haystack.size(); i++)
    {
      if (haystack.substr(i, needle.size()) == needle)
      {
        return i;
      }
    }

    return -1;
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<string> word1 = {"ab", "c"};
  // vector<string> arr = {"a","abc","bc","d"};

  cout << s.strStr("leetcode", "leeto") << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}