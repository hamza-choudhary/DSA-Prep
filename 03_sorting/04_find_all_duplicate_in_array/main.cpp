#include "bits/stdc++.h"

using namespace std;

//! WHEN GIVEN NO.S FROM RANGE 1 TO N => USE CYCLIC SORT
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      
      vector<int> duplicate {};

      int i=0;

      while(i < nums.size())
      {
        int correct = nums[i] - 1;

        if (nums[i] != nums[correct])
        {
          int temp = nums[i];
          nums[i] = nums[correct];
          nums[correct] = temp;
        }
        else {
          i++;
        }
      }

      //check all duplicate
      for (int i=0; i<nums.size(); i++)
      {
        if (nums[i] != i+1)
        {
          duplicate.push_back(nums[i]);
        }
      }

      return duplicate;
    }
};

int main()
{
  vector<int> arr{4,3,2,7,8,2,3,1};

  Solution s = Solution();
  cout << boolalpha << endl;

  // cout << s.findDuplicate(arr) << endl;

  vector<int> vec = s.findDuplicates(arr);
  for (auto i: vec)
    cout << i << " ";

  return 0;
}