#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> result;
    for (int i=0; i<n; i++)
    {
      result.push_back(nums[i]);
      result.push_back(nums[n+i]);
    }
    return result;
  }
};

int main()
{
  Solution s = Solution();

  // vector<int> input = {2,5,1,3,4,7}; //n=3
  vector<int> input = {1,2,3,4,4,3,2,1}; //n=4
  // vector<int> input = {1,1,2,2}; //n=2
  // vector<int> input = {7,5,9,7,5,8,10,4,3,3,2,5,9,10}; //n=7


  vector<int> ans = s.shuffle(input, 4);

  for (auto a: ans)
  {
    cout << a << ", ";
  }
  

  return 0;
}