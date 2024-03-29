#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  bool checkIfExist(vector<int>& arr) {
    //? do it with unordered sets or unordered hashmaps for efficient results
    for (int i=0; i<arr.size(); i++) {
      for (int j=0; j<arr.size(); j++) {
        if (i==j) 
          continue;

        if (arr[i] == 2*arr[j])
          return true;
      }
    }
    
    return false;
  }
};

int main()
{
  vector<int> arr {3,1,7,11};

  Solution s = Solution();

  cout << boolalpha << endl;
  cout << s.checkIfExist(arr) << endl;

  return 0;
}