#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  int searchInsert(vector<int>& nums, int target) {
    
    long long s=0, e=nums.size(), mid=0;

    while (s <= e)
    {
      mid = s + (e-s)/2;

      if (nums[mid] == target)
      {
        return mid;
      }
      else if (nums[mid] < target)
      {
        s = mid + 1;
      }
      else if (nums[mid] > target)
      {
        e = mid - 1;
      }
    }

    return mid;
  }
};

int main()
{
  Solution s = Solution();

  vector<int> nums {1,3,5,6};

  cout << s.searchInsert(nums, 7) << endl;

  return 0;
}