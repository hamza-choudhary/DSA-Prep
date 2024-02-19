#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  //! good for any constraint
  vector<int> smallerNumbersThanCurrent(vector<int> &nums)
  {
    vector<int> ans = nums;
    unordered_map<int, int> m;

    sort(ans.begin(), ans.end());

    //! we have to go reverse else repeated elemets counts will be incorrect
    for (int i = ans.size()-1; i >= 0; i--)
    {
      m[ans[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++)
    {
      nums[i] = m[nums[i]];
    }

    return nums;
  }
  //? good for leet code problem as there is constrainst no element is greater then 100
  // vector<int> smallerNumbersThanCurrent(vector<int> &nums)
  // {
  //   //! https://youtu.be/C5u_hvbq1qQ?t=605

  //   vector<int> bucket(101);

  //   for (int i = 0; i < nums.size(); i++)
  //   {
  //     bucket[nums[i]]++;
  //   }

  //   // accumulative sum
  //   for (int i = 1; i < bucket.size(); i++)
  //   {
  //     bucket[i] = bucket[i] + bucket[i - 1];
  //   }

  //   //? reason why we using -1 in update ans
  //   // for (int i=0; i<bucket.size(); i++)
  //   // {
  //   //   cout << i << " " << bucket[i] << endl;
  //   // }

  //   // update ans
  //   for (int i = 0; i < nums.size(); i++)
  //   {
  //     if (nums[i] == 0)
  //     {
  //       nums[i] == 0;
  //     }
  //     else
  //     {
  //       nums[i] = bucket[nums[i] - 1];
  //     }
  //   }

  //     return nums;
  // }
};

int main()
{

  return 0;
}