#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> target (n);
      
        for (int i=0;i<n;i++)
        {
          target[index[i]] = nums[i];
        }
      return target;
    }
};

int main()
{
  
  Solution s = Solution();

  int nums[] = {0,1,2,3,4};
  int index[] = {0,1,2,2,1};

  int target[5] = {-1,-1,-1,-1,-1};

  for (int i=0;i<5;i++)
  {
    target[index[i]] = nums[i]; 
  }

  for (int i=0;i<5;i++)
  {
    cout << target[i] << ", ";
  }


  return 0;
}