#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int thirdMax(vector<int> &nums)
  {
    long long max1 = LLONG_MIN;
    long long max2 = LLONG_MIN;
    long long max3 = LLONG_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] > max1)
      {
        max3 = max2;
        max2 = max1;
        max1 = nums[i];
      }
      else if (nums[i] > max2 && nums[i] < max1)
      {
        max3 = max2;
        max2 = nums[i];
      }
      else if (nums[i] > max3 && nums[i] < max2)
      {
        max3 = nums[i];
      }
    }

    // If max3 is updated, return it; otherwise, return max1
    if (max3 != LLONG_MIN)
      return max3;
    else
      return max1;
  }
};

int main()
{
  vector<int> arr{2, 2, 3, 1};
  vector<int> arr2{9, 4, 9, 8, 4};

  Solution s = Solution();
  // cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  cout << s.thirdMax(arr) << endl;

  // vector<int> vec = s.thirdMax(arr);
  // for (auto i : vec)
  //   cout << i << " ";

  return 0;
}
