#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<vector<int>> transpose(vector<vector<int>> &matrix)
  {
    int m = matrix.size();
    int n = matrix[0].size();

    vector<vector<int>> transposed_matrix(n, vector<int>(m, 0));

    for (int i = 0; i < m; i++)
    {
      for (int j = i; j < n; j++)
      {
        transposed_matrix[i][j] = matrix[j][i];
      }
    }

    return transposed_matrix;
  }
};

int main()
{

  Solution s = Solution();

  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}};

  vector<vector<int>> transpose = s.transpose(matrix);

  for (int i = 0; i < transpose.size(); i++)
  {
    for (int j = 0; j < transpose[i].size(); j++)
    {
      cout << transpose[i][j];
    }
    cout << "\n";
  }

  return 0;
}
