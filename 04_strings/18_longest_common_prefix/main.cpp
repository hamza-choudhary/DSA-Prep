#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      
      //! https://leetcode.com/problems/longest-common-prefix/solutions/391089/c-easy-to-understand-solution-using-sort/?orderBy=most_votes
      sort(strs.begin(), strs.end());

      string first = strs[0];
      string last = strs[strs.size() - 1];
      string result;

      for (int i=0; i<first.size(); i++) {
        if (first[i] != last[i]) {
          return result;
        }
        result += first[i];
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
  vector<string> arr = {"flower","flow","flight"};

  cout << s.longestCommonPrefix(arr) << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}