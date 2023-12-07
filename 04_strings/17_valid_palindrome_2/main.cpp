#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool isPalindrome(string s, int start, int end)
  {
    while (start < end)
    {
      if (s[start] != s[end])
      {
        return false;
      }

      start++;
      end--;
    }
    return true;
  }

  bool validPalindrome(string s)
  {
    int i = 0, j = s.size() - 1;

    while (i < j)
    {
      if (s[i] != s[j])
      {
        return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
      }
      i++;
      j--;
    }

    return true;
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<string> word1 = {"ab", "c"};
  // vector<string> arr = {"a","abc","bc","d"};

  cout << s.validPalindrome("abc") << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}