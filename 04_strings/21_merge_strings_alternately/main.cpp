#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  string mergeAlternately(string word1, string word2)
  {

    string result;
    int i = 0, j = 0;

    while (i < word1.size() || j < word2.size())
    {
      if (i < word1.size())
      {
        result += word1[i];
      }
      if (j < word2.size())
      {
        result += word2[j];
      }

      i++;
      j++;
    }

    return result;
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<string> word1 = {"ab", "c"};
  // vector<string> arr = {"flower", "flow", "flight"};

  cout << s.mergeAlternately("aaabaaaabaaabaaaabaaaabaaaabaaaaba", ",") << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}