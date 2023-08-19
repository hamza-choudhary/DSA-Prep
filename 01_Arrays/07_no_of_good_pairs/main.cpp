#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  int numIdenticalPairs(vector<int>& nums) {
    int count = 0;
    
    for(int i=0;i<nums.size();i++)
    {
      for (int j=i+1;j<nums.size();j++)
      {
        if (nums[i] == nums[j] && i < j)
          count++;
      }
    }
    return count;
  }
};

int main()
{
  Solution s = Solution();
  vector<int> input = {1,2,3};
  int count = s.numIdenticalPairs(input);

  cout << count;

  return 0;
}