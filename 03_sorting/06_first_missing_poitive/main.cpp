#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int firstMissingPositive(vector<int> &nums)
  {
    int i=0;

    //! In missing nums we have to check out of bounds

    while (i < nums.size())
    {
      long correct = (long) nums[i] - 1;

      //WE also have to ignore no.s > N
      if (nums[i] > 0 && nums[i] < nums.size() && nums[i] != nums[correct])
      {
        //swap
        int temp = nums[i];
        nums[i] = nums[correct];
        nums[correct] = temp;
      }
      else {
        i++;
      }
    }

    // for (auto i: nums)
    //   cout << i << " ";
    // cout << endl;
    //first missing positive
    for(int i=0; i<nums.size(); i++)
    {
      if (nums[i] != i+1)
      {
        return i+1;
      }
    }

    //! https://youtu.be/JfinxytTYFQ?t=5482
    return nums.size() + 1;
  }
};

int main()
{
  vector<int> arr{3,4,-1,1};

  Solution s = Solution();
  cout << boolalpha << endl;

  cout << s.firstMissingPositive(arr) << endl;

  // vector<int> vec = s.firstMissingPositive(arr);
  // for (auto i: vec)
  //   cout << i << " ";

  return 0;
}
