#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
  {

    // in cpp it does not contain garbage value
    string s1, s2;

    for (int i = 0; i < word1.size(); i++)
    {
      s1 += word1[i];
    }
    for (int i = 0; i < word2.size(); i++)
    {
      s2 += word2[i];
    }

    return s1 == s2;
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  vector<string> word1 = {"ab", "c"};
  vector<string> word2 = {"a", "bc"};

  cout << s.arrayStringsAreEqual(word1, word2) << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}