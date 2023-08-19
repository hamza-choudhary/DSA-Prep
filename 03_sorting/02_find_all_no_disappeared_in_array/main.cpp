#include "bits/stdc++.h"

using namespace std;

//! WHEN GIVEN NO.S FROM RANGE 1 TO N => USE CYCLIC SORT
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution
{
public:
  vector<int> findDisappearedNumbers(vector<int> &nums)
  {

    int i=0;
    vector<int> missing {};

    while(i < nums.size()) {

      int current = nums[i] - 1; //as range is from 1->n

      if (nums[i] != nums[current])
      {
        //swap
        int temp = nums[i];
        nums[i] = nums[current];
        nums[current] = temp;
      } else {
        i++;
      }
    }

    //check any differences
    for (int i=0; i<nums.size(); i++) 
    {
      if (nums[i] != i+1) {
        missing.push_back(i+1);
      }
    }

    return missing;
  }
};

int main()
{
  vector<int> arr{4,3,2,7,8,2,3,1};

  Solution s = Solution();
  cout << boolalpha << endl;

  vector<int> missing = s.findDisappearedNumbers(arr);

  for (auto i: missing) 
    cout << i << " ";

  // cout << s.findDisappearedNumbers(arr) << endl;

  return 0;
}