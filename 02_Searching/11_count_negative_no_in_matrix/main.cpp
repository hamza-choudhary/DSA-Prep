#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int countNegatives(vector<vector<int>> &grid)
  {
    int sum = 0;
    for (int i = 0; i < grid.size(); i++)
    {
      int s = 0;
      int e = grid[i].size() - 1;

      if (grid[i][e] >= 0)
        continue;

      while (s <= e)
      {
        int mid = s + (e - s) / 2;
        if (grid[i][mid] >= 0)
        {
          s = mid + 1;
        }
        else
        {
          e = mid - 1;
        }
      }
      sum += grid[i].size() - s;
    }
    return sum;
  }
};

int main()
{
  Solution s = Solution();

  // vector<vector<int>> grid {{4,3,-2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
  // vector<vector<int>> grid {{3,2},{1,0}};

  vector<vector<int>> grid{{8, -2, -2, -2, -4, -5, -5}, {-2, -3, -3, -4, -4, -5, -5}, {-2, -5, -5, -5, -5, -5, -5}, {-3, -5, -5, -5, -5, -5, -5}, {-5, -5, -5, -5, -5, -5, -5}, {-5, -5, -5, -5, -5, -5, -5}, {-5, -5, -5, -5, -5, -5, -5}, {-5, -5, -5, -5, -5, -5, -5}, {-5, -5, -5, -5, -5, -5, -5}};

  cout << "\n"
       << s.countNegatives(grid) << endl;

  return 0;
}