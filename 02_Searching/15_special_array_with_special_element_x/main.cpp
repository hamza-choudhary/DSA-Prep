#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  int specialArray(vector<int>& nums) {
    
    int count=0;
    int max=INT_MIN;

    for (int x=0; x<nums.size()+1; x++) {
      count=0;
      for (int j=0; j<nums.size(); j++) {
        if (nums[j] >= x)
          count++;
      }

      if (count == x)
        return x;
    }
    return -1;
  }
};

int main()
{
  Solution s = Solution();

  vector<int> nums {0,4,3,0,4};

  cout << s.specialArray(nums) << endl;

  return 0;
} 