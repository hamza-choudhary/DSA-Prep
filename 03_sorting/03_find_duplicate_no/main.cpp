#include "bits/stdc++.h"

using namespace std;

//! WHEN GIVEN NO.S FROM RANGE 1 TO N => USE CYCLIC SORT
// https://leetcode.com/problems/find-the-duplicate-number/description/
class Solution
{
public:
  int findDuplicate(vector<int> &nums)
  {
    int i=0;

    while (i < nums.size())
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

    // for (auto i: nums)
    //   cout << i << " ";

    //checking duplicate
    for (int i=0; i<nums.size(); i++)
    {
      if (nums[i] != i+1) 
      {
        return nums[i];
      }
    }

    return -1;
  }
};

int main()
{
  vector<int> arr{1, 3, 4, 2, 2};

  Solution s = Solution();
  cout << boolalpha << endl;

  cout << s.findDuplicate(arr) << endl;

  // vector<int> vec = s.findDisappearedNumbers(arr);
  // for (auto i: vec)
  //   cout << i << " ";

  return 0;
}