#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  int oddCells(int m, int n, vector<vector<int>>& indices) {
    vector<vector<int>> matrix(m, vector<int> (n, 0));

    int row = 0;
    int col = 0;
    int counter = 0;

    int indic_size = indices.size();

    for (int i=0; i<indic_size;i++)
    {
      row = indices[i][0];
      col = indices[i][1];

      for (int j=0;j<n;j++) //set a row & row should same
      {
        matrix[row][j]++;
      }

      for (int j=0; j<m; j++) //set a col & col should same
      {
        matrix[j][col]++;
      }
    }

    for (int i=0;i<m;i++)
    {
      for (int j=0;j<n;j++)
      {
        if (matrix[i][j] % 2 != 0)
        {
          counter++;
        }
      }
    }

    return counter;
  }
};

int main()
{
  vector<vector<int>> indices = {{0,1},{1,1}};
  Solution s = Solution();

  // vector<vector<int>> matrix(2, vector<int> (3, 0));

  //     for (int i=0;i<2;i++)
  //   {
  //     for (int j=0;j<3;j++)
  //     {
  //       cout << matrix[i][j] << ", ";
  //     }
  //     cout << endl;
  //   }

  // cout <<  s.oddCells(2, 3, indices);
  cout << s.oddCells(2, 3, indices);

  return 0;
}