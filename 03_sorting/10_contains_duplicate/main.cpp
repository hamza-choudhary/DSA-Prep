#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
      unordered_map<int, int> duplicators;

      for (int i=0; i<nums.size(); i++)
      {
        duplicators[nums[i]]++;

        if(duplicators[nums[i]] > 1)
        {
          return true;
        }
      }

      return false;
    }
};

int main()
{
  vector<int> arr{1,2,3,-4};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  cout << s.containsDuplicate(arr) << endl;

  // vector<int> vec = s.firstMissingPositive(arr);
  // for (auto i: arr)
  //   cout << i << " ";

  return 0;
}
