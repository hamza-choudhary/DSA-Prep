#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  vector<int> luckyNumbers (vector<vector<int>>& matrix) {
    
    vector<int> result;
    int index=0;
    int min=0;

    for (int i=0;i<matrix.size();i++)
    {
      min=INT_MAX;

      //find minimum in row
      for (int j=0;j<matrix[i].size();j++)
      {
        //find minimum
        if (matrix[i][j] < min)
        {
          min=matrix[i][j];
          index=j;
        }
      }
      //find in column
      for (int j=0;j<matrix.size();j++)
      {
        if (min < matrix[j][index]) 
        {
          min = -1;
          break;
        }
      }
      if (min != -1)
      {
        result.push_back(min);
      }
    }

    return result;
  }
};

int main()
{
  Solution s = Solution();
  vector<vector<int>> matrix = {{1,10,4,2},{9,3,8,7},{15,16,17,12}};

  for (auto r: s.luckyNumbers(matrix))
  {
    cout << r << ", ";
  }
  return 0;
}