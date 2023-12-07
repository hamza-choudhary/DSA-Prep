#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool isPalindrome(string s)
  {

    string raw_string;
    for (int i = 0; i < s.size(); i++)
    {
      char c = tolower(s[i]);
      if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
      {
        raw_string += c;
      }
    }

    for (int i = 0, j = raw_string.size() - 1; i < j; i++, j--)
    {
      if (raw_string[i] != raw_string[j])
      {
        return false;
      }
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

  cout << s.isPalindrome("A man, a plan, a canal: Panama") << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}