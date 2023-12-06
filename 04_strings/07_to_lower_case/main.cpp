#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
      
      for(int i=0; i<s.size(); i++) {
        // means char is uppercase
        if (s[i] >= 'A' && s[i] <= 'Z') {
          s[i] += 'a' - 'A';
        }
      }

      return s;
    }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<string> word1 = {"ab", "c"};
  // vector<string> word2 = {"a", "bc"};

  cout << s.toLowerCase("Hello") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}