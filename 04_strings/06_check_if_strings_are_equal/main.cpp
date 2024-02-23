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
  //! approach 2:
  // bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
  // {
  //   int i = 0;
  //   int j = 0;
  //   int pointer_1 = 0;
  //   int pointer_2 = 0;

  //   while (i < word1.size() && j < word2.size())
  //   {
  //     if (word1[i][pointer_1++] != word2[j][pointer_2++])
  //     {
  //       return false;
  //     }

  //     if (pointer_1 >= word1[i].size())
  //     {
  //       // or you can use pointer_1 < word[i].size() - 1
  //       pointer_1 = 0;
  //       i++;
  //     }
  //     if (pointer_2 >= word2[j].size())
  //     {
  //       pointer_2 = 0;
  //       j++;
  //     }
  //   }

  //   return i == word1.size() && j == word2.size();
  // }
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