#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    int n = image.size();
    vector<vector<int>> result (n);
    for (int i=0; i<n; i++)
    {
      //reversing and inverting
      for (int j=n-1; j>=0; j--)
      {
        result[i].push_back( !image[i][j]); //! inversion
      }
    }

    return result;
  }
};

int main()
{
  vector<vector<int>> image = {{1,1,0},{1,0,1},{0,0,0}};

  Solution s = Solution();

  vector<vector<int>> result = s.flipAndInvertImage(image);

  for (int i=0; i<result.size(); i++)
  {
    for (int j=0; j<result[i].size(); j++)
    {
      cout << result[i][j] << ", ";
    }
    cout << endl;
  }

  return 0;
}