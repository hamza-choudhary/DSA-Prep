#include "bits/stdc++.h"

using namespace std;

//!----------MUST READ ------------------------
//! https://leetcode.com/problems/majority-element/solutions/3676530/3-method-s-beats-100-c-java-python-beginner-friendly/

class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    //* Moore Voting Algorithm
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      if (count == 0)
      {
        candidate = nums[i];
      }

      if (nums[i] != candidate)
      {
        count--;
      }
      else
      {
        count++;
      }
    }

    return candidate;
  }
};

int main()
{
  vector<int> arr{2, 2, 1, 1, 1, 2, 2};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  cout << s.majorityElement(arr) << endl;

  // vector<int> vec = s.firstMissingPositive(arr);
  // for (auto i: arr)
  //   cout << i << " ";

  return 0;
}
