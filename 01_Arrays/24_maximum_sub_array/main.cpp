#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    // kadanes algorithm
    //! https://www.youtube.com/watch?v=w4W6yya1PIc
    int sum = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
      sum += nums[i];

      maxi = max(maxi, sum);
      if (sum < 0)
      {
        sum = 0;
      }
    }
    return maxi;
  }
};

int main()
{
  Solution s = Solution();

  vector<int> nums = {-2, -3, -4, -5, -1};

  cout << s.maxSubArray(nums);

  return 0;
}