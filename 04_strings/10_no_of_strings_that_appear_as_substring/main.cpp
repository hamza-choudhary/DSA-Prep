#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
      
      int count=0;

      for (int i=0; i<patterns.size(); i++) {
        if (word.find(patterns[i]) != -1) {
          count++;
        }
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
  vector<string> arr = {"a","abc","bc","d"};

  cout << s.numOfStrings(arr,"abc") << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}