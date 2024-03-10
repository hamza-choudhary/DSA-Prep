#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  // vector<int> smallerNumbersThanCurrent(vector<int> &nums)
  // {
  //   vector<int> ans = nums;
  //   unordered_map<int, int> m;

  //   sort(ans.begin(), ans.end());

  //   for (int i = ans.size() - 1; i >= 0; i--)
  //   {
  //     m[ans[i]] = i;
  //   }

  //   for (int i = 0; i < nums.size(); i++)
  //   {
  //     nums[i] = m[nums[i]];
  //   }

  //   return nums;
  // }
  vector<int> smallerNumbersThanCurrent(vector<int> &nums)
  {
    //! https://youtu.be/C5u_hvbq1qQ?t=605
    // we can do it with maps as well
    vector<int> bucket(101);

    for (int i = 0; i < nums.size(); i++)
    {
      bucket[nums[i]]++;
    }

    // accumulative sum
    for (int i = 1; i < bucket.size(); i++)
    {
      bucket[i] = bucket[i] + bucket[i - 1];
    }

    //? reason why we using -1 in update ans
    // for (int i=0; i<bucket.size(); i++)
    // {
    //   cout << i << " " << bucket[i] << endl;
    // }

    // update ans
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == 0)
      {
        nums[i] = 0;
      }
      else
      {
        nums[i] = bucket[nums[i] - 1];
      }
    }

    return nums;
  }
};

int main()
{
  vector<int> arr{8, 1, 2, 2, 3};
  vector<int> arr2{6, 5, 4, 8};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  // cout << s.relativeSortArray(arr) << endl;

  vector<int> vec = s.smallerNumbersThanCurrent(arr);
  for (auto &val : vec)
  {
    cout << val << " ";
  }

  return 0;
}
