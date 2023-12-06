#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  string freqAlphabets(string s)
  {
    string result;

    int i = 0;
    while (i < s.size())
    {

      // check if char is in [j, z] -> [10#, 26#]
      if (i + 2 < s.size() && s[i + 2] == '#') // to make sure we dont go out of bounds
      {
        int n = stoi(s.substr(i, i + 2));
        result += 'j' - 10 + n;

        i += 3;
        continue;
      }
      // check if char is [a, i] -> [1, 9]
      //  if (s[i] >= '1' && s[i] <= '9') {

      // }
      // there is no need to check condition as in string there are only ints and # and we already checked # case
      result += s[i] + 'a' - '1';
      i++;
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
  // vector<string> word2 = {"a", "bc"};

  cout << s.freqAlphabets("21#523#12#22#611#71910#721#18#8") << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}