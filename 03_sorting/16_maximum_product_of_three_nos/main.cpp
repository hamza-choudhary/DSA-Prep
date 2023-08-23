#include "bits/stdc++.h"

using namespace std;
//Watch this
//! https://www.youtube.com/watch?v=9A4Bebss1WQ

class Solution
{
public:
  int maximumProduct(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    
    //We cannot just find 3 max numbers and multiply them as we have to consider -ve numbers as well
    //case1: say if we have all positive nums then max product will be max 3 numbers or last 3 numbers in sorted array
    //case2: in -ve numbers sorted array [-100, -99, -98, 1,3, 5] => if we multiply first 3 numbers them product will be -ve but 
    //if we multiply first 2 numbers and last number their product will be +ve
    // now we have to check which product is greater case1 or case2

    int n = nums.size();

    return max(nums[n-1] * nums[n-2] * nums[n-3], nums[0] * nums[1] * nums[n-1]);
  }
};

int main()
{
  vector<int> arr{6, 2,  5, 1};
  vector<int> arr2{1, 2, 3};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  cout << s.maximumProduct(arr2) << endl;

  // vector<int> vec = s.thirdMax(arr);
  // for (auto i : vec)
  //   cout << i << " ";

  return 0;
}
