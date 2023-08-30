#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int maxProduct(vector<int> &nums)
  {
    long max1 = INT_MIN;
    long max2 = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] >= max1) // >= bcz same number can come twice
      {
        max2 = max1;
        max1 = nums[i];
      }
      else if (nums[i] > max2 && max2 < max1)
      {
        max2 = nums[i];
      }
    }

    return (max1 - 1) * (max2 - 1);
  }
};

int main()
{
  vector<int> arr{10, 2, 5, 2};
  vector<int> arr2{3, 4, 5, 2};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  cout << s.maxProduct(arr) << endl;

  // vector<int> vec = s.smallerNumbersThanCurrent(arr);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}
