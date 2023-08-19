#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  int diagonalSum(vector<vector<int>>& mat) {
    int sum=0;
    int m = mat.size();
    int n = m-1; //0 base indexing

    for (int i=0; i<m; i++, n--)
    {
      sum += mat[i][i]; //first diagnol
      if (i!=n)
      {
        sum += mat[i][n];
      }
    }

    return sum;
  }
};


int main()
{
  vector<vector<int>> matrix = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
  Solution s = Solution();

  cout << s.diagonalSum(matrix);

  return 0;
}