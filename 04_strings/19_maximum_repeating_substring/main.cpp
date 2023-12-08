#include "bits/stdc++.h"

using namespace std;


class Solution
{
public:
  int maxRepeating(string sequence, string word)
  {
    //! we need to find the maximum non-overlapping substrings but all substrings should be consective
    //? https://www.youtube.com/watch?v=64y788IgHAE
    int count = 0;
    string word_to_find = word;

    while (true)
    {
      if (sequence.find(word_to_find) == string::npos)
      {
        return count;
      }
      word_to_find += word;
      count++;
    }
    return count;
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<string> word1 = {"ab", "c"};
  // vector<string> arr = {"flower", "flow", "flight"};

  cout << s.maxRepeating("aaabaaaabaaabaaaabaaaabaaaabaaaaba", "aaaba") << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}