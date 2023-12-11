#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
  {
    for (auto &row : image) //& is very very very must
    {
      //? xor
      //? 0 ^ 1 = 1
      //? 1 ^ 1 = 0

      // reverse every row
      for (int i = 0, j = row.size() - 1; i <= j; i++, j--)
      {
        int temp = row[i];
        row[i] = row[j] ^ 1; // xor with 1
        row[j] = temp ^ 1;   // xor with 1
      }
    }

    return image;
  }
};

int main()
{
  Solution s = Solution();
  cout << boolalpha;

  vector<vector<int>> arr = {{1, 1, 0, 0}, {1, 0, 0, 1}, {0, 1, 1, 1}, {1, 0, 1, 0}};

  arr = s.flipAndInvertImage(arr);

  for (auto a : arr)
  {
    cout << "[";
    for (auto value : a)
    {
      cout << value << ", ";
    }
    cout << "]" << endl;
  }

  return 0;
}