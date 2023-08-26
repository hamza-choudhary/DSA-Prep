#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter)
  {
    //! https://www.youtube.com/watch?v=_b_cEz-Pa2U

    vector<vector<int>> result(rows * cols, vector<int>(2));

    for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
      {
        // to find box no -> formula
        int box_no = i * cols + j;

        result[box_no][0] = i;
        result[box_no][1] = j;
      }
    }

    // now sort the array by manhatan distance

    sort(result.begin(), result.end(),
          [rCenter, cCenter]( vector<int> &a, vector<int> &b) -> bool
          {
            int distance1 = abs(a[0] - rCenter) + abs(a[1] - cCenter);
            int distance2 = abs(b[0] - rCenter) + abs(b[1] - cCenter);

            return distance1 < distance2;
          });

    return result;
  }
};

int main()
{
  vector<int> arr{-4, -1, 0, 3, 10};
  vector<int> arr2{1, 2, 3};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  // cout << s.sortedSquares(arr) << endl;

  vector<vector<int>> vec = s.allCellsDistOrder(2, 2, 0, 1);
  for (int i = 0; i < vec.size(); i++)
  {
    for (int j = 0; j < vec[0].size(); j++)
    {
      cout << vec[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
