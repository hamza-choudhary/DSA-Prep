#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  int countNegatives(vector<vector<int>>& grid) {
    
    int count=0;
    int length = grid[0].size();

    for (int i=0; i<grid.size(); i++)
    {
      int s=0, e=length-1, mid=0;

      //means there is no -ve nos
      if (grid[i][e] >= 0) 
      {
        continue;
      }

      while (s<=e)
      {
        mid = s + (e-s)/2;
        if (grid[i][mid] >= 0)
        {
          s = mid+1;
        }
        else if (grid[i][mid] < 0)
        {
          e = mid-1;
        }
      }

      // cout << s << endl;
      count += length - s;
    }


    return count;
  }
};

int main()
{
  Solution s = Solution();

  // vector<vector<int>> grid {{4,3,-2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
  // vector<vector<int>> grid {{3,2},{1,0}};

  vector<vector<int>> grid {{8,-2,-2,-2,-4,-5,-5},{-2,-3,-3,-4,-4,-5,-5},{-2,-5,-5,-5,-5,-5,-5},{-3,-5,-5,-5,-5,-5,-5},{-5,-5,-5,-5,-5,-5,-5},{-5,-5,-5,-5,-5,-5,-5},{-5,-5,-5,-5,-5,-5,-5},{-5,-5,-5,-5,-5,-5,-5},{-5,-5,-5,-5,-5,-5,-5}};

  cout << "\n" << s.countNegatives(grid) << endl;

  return 0;
}