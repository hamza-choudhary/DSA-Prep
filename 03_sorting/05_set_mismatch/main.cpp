#include "bits/stdc++.h"

using namespace std;

// https://leetcode.com/problems/set-mismatch/description/
class Solution
{
public:
  vector<int> findErrorNums(vector<int> &nums)
  {

    vector<int> setMismatch {};

    int i=0;
    while (i < nums.size()) 
    {
      int correct = nums[i] - 1;

      if (nums[i] != nums[correct]) 
      {
        //swap
        int temp = nums[i];
        nums[i] = nums[correct];
        nums[correct] = temp;
      } else {
        i++;
      }
    }

    for (int i=0; i<nums.size(); i++)
    {
      if (nums[i] != i+1) 
      {
        setMismatch.push_back(nums[i]);
        setMismatch.push_back(i+1);
      }
    }

    return setMismatch;
  }
};

int main()
{
  vector<int> arr{1, 1};

  Solution s = Solution();
  cout << boolalpha << endl;

  // cout << s.findErrorNums(arr) << endl;

  vector<int> vec = s.findErrorNums(arr);
  for (auto i: vec)
    cout << i << " ";

  return 0;
}
