#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  string reversePrefix(string word, char ch)
  {
    int idx = word.find(ch);

    if (idx == -1 || word[0] == ch)
    {
      return word;
    }

    char temp;
    int i = 0, j = idx; //! we are not doing it because we want to include the value at which ch is also as mentioned (inclusively) in question - 1;
    while (i < j)
    {
      temp = word[i];
      word[i] = word[j];
      word[j] = temp;

      i++;
      j--;
    }

    return word;
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<string> word1 = {"ab", "c"};
  // vector<string> arr = {"flower", "flow", "flight"};

  cout << s.reversePrefix("xyxzxe", 'z') << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}