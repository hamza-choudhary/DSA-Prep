#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        for (int i=0;i<accounts.size();i++)
        {
            
        }
    }
};

int main()
{

  vector<int> nums = {1,2,3,4};
  
  // Solution s = Solution();
  // vector<int> ans = s.maximumWealth(nums);

  // for (auto a : ans)
  // {
  //   cout << a << ", ";
  // }

  int max = INT_MIN;
  for (int i=0;i<nums.size();i++)
  {
    if (nums[i]>max)
    {
      max = nums[i];
    }
  }
  cout << max;
  return 0;
}