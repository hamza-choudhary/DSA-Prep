#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int current_sum=0;
    int max_sum = INT_MIN;

    //Kadanes algorithm
    for (int i = 0; i < nums.size(); i++)
    {
      current_sum += nums[i];

      if (current_sum > max_sum) 
      {
        max_sum = current_sum;
      }
      
      if (current_sum < 0)
      {
        current_sum = 0;
      }

    }
    
    return max_sum;
  }
};

int main()
{
  Solution s = Solution();

  vector<int> nums = {-2,-3,-4,-5, -1};

  cout << s.maxSubArray(nums);

  return 0;
}