#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool halvesAreAlike(string s)
  {
    int count_1 = 0;
    int count_2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
          s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
          s[i] == 'O' || s[i] == 'U')
      {
        if (i < s.size() / 2)
        {
          count_1++;
        }
        else
        {
          count_2++;
        }
      }
    }

    return count_1 == count_2;
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<string> word1 = {"ab", "c"};
  // vector<string> word2 = {"a", "bc"};

  cout << s.halvesAreAlike("textbook") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}