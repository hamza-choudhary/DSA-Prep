#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    vector<vector<int>> result (r, vector<int>(c));

    int m = mat.size();
    int n = mat[0].size();

    //base case:
    if ((r * c) != (m * n)) 
    {
      return mat;
    }

    int row=0;
    int col=0;

    for (int i=0; i<m; i++) 
    {
      for (int j=0; j<n; j++)
      {
        if (col == c) //means 1 row is completed
        {
          col = 0;
          row++;
        }
        result[row][col] = mat[i][j];
        col++;
      }
    }

    return result;
  }
};

int main()
{
  Solution s = Solution();

  vector<vector<int>> matrix = {{1,2}, {3,4}};

  matrix = s.matrixReshape(matrix, 1, 4);

  for (int i=0;i<matrix.size();i++)
  {
    for (int j=0;j<matrix[i].size();j++)
    {
      cout << matrix[i][j] << ", ";
    }
    cout << endl;
  }

  return 0;
}