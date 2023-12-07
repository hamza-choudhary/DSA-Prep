#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {

      //! we have to subtract -1 from column no as when 0->A , 1-> B but we are getting column no. 1->A, 2->B
      // columnNumber = 26;
      // char c = (columnNumber % 26) + 'A';
      // cout << c << endl;

      string result;

      while(columnNumber) {
        columnNumber--;
        char c = 'A' + columnNumber % 26;
        result = c + result; //so every new char goes to 1st position
        columnNumber /= 26;
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
  // vector<string> arr = {"a","abc","bc","d"};

  cout << s.convertToTitle(1) << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}