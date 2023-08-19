#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
      vector<int> sums (accounts.size());
      for (int i=0;i<accounts.size();i++)
      {
        for (int j=0;j<accounts[i].size();j++)
        {
          sums[i] += accounts[i][j];
        }
      }
      int max = INT_MIN;
      
      for (int i=0;i<sums.size();i++)
      {
        if (sums[i]>max)
        {
          max = sums[i];
        }
      }
      return max;
    }
};

int main()
{

  vector<vector<int>> nums = {{1,2,3},{3,2,1}};
  
  Solution s = Solution();

  cout << s.maximumWealth(nums);

  return 0;
}