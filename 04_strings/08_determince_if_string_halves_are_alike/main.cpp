#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool halvesAreAlike(string s)
  {

    int firstHalf = 0;
    int secondHalf = 0;

    vector<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < s.size() / 2; i++)
    {

      for (int j = 0; j < vowels.size(); j++)
      {
        if (vowels[j] == s[i])
        {
          firstHalf++;
          break;
        }
      }
      for (int j = 0; j < vowels.size(); j++)
      {
        if (vowels[j] == s[(s.size() / 2) + i])
        {
          secondHalf++;
          break;
        }
      }
    }

    return firstHalf == secondHalf;
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