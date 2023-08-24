#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<int> sortArrayByParityII(vector<int> &nums)
  {
    int i = 0;
    int j = 1;

    while (i < nums.size())
    {
      if (nums[i] % 2 == 0)
      {
        i += 2;
      }
      else if (nums[j] % 2 != 0)
      {
        j += 2;
      }
      else// it means they are out of place
      {
        int temp=nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }

    return nums;
  }
};

int main()
{
  vector<int> arr{4, 2, 5, 7};
  vector<int> arr2{1, 2, 3};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  // cout << s.maximumProduct(arr2) << endl;

  vector<int> vec = s.sortArrayByParityII(arr);
  for (auto i : vec)
    cout << i << " ";

  return 0;
}
