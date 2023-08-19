#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    vector<vector<int>> transposed (col, vector<int>(row));

    for (int i=0; i<col; i++)
    {
      for (int j=0; j<row; j++)
      {
        transposed[i][j] = matrix[j][i];
      }
    }

    return transposed;
  }
};

int main()
{
  
  Solution s = Solution();

  vector<vector<int>> matrix = {{1,2,3},{4,5,6}};

  vector<vector<int>> transpose = s.transpose(matrix);

  for (int i=0;i<transpose.size();i++)
  {
    for (int j=0;j<transpose[i].size(); j++)
    {
      cout << transpose[i][j];
    }
    cout << "\n";
  }

  return 0;
}