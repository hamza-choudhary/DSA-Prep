#include "bits/stdc++.h"

using namespace std;

//! WHEN GIVEN NO.S FROM RANGE 1 TO N => USE CYCLIC SORT
// https://leetcode.com/problems/missing-number/

class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {
    // if any out of bounds just ignore
    int i=0;
    
    while(i < nums.size()) {

      int current = nums[i]; // nums[i] - 1 cuz our range is 0 -> n in actual algo we have index from 1 -> N

      //case 1: if num is out of bounds just ignore
      if (nums[i] < nums.size() && nums[i] != nums[current]) {
        int temp = nums[i];
        nums[i] = nums[current];
        nums[current] = temp;
      } else {
        i++;
      }
    }

    //now find the actual value
    for (int i=0; i<nums.size(); i++) {
      if (nums[i] != i) {
        return i;
      }
    }

    //last case if after sorting [0,1,2,3] -> now missing is 4

    return nums.size();
  }
};

int main()
{
  vector<int> arr{1};
  Solution s = Solution();

  cout << boolalpha << endl;
  cout << s.missingNumber(arr) << endl;

  return 0;
}