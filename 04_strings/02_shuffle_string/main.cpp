#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  string restoreString(string s, vector<int> &indices)
  {

    string result(indices.size(), '*');

    for (int i = 0; i < indices.size(); i++)
    {
      result[indices[i]] = s[i];
    }

    return result;
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};

  cout << s.restoreString("codeleet", arr) << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}