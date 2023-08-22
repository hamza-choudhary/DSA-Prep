#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int findContentChildren(vector<int> &g, vector<int> &s)
  {

    //!https://www.youtube.com/watch?v=2oZD3GfboFo

    int total_children = 0;
    int current_idx = 0;

    sort(s.rbegin(), s.rend());
    sort(g.rbegin(), g.rend());

    for (int i = 0; i < g.size(); i++)
    {
      if (current_idx < s.size() && g[i] <= s[current_idx])
      {
        total_children++;
        current_idx++;
      }
    }

    return total_children;
  }
};

int main()
{
  vector<int> arr{1,2};
  vector<int> arr2{1,2,3};

  Solution s = Solution();
  // cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  cout << s.findContentChildren(arr, arr2) << endl;

  // vector<int> vec = s.thirdMax(arr);
  // for (auto i : vec)
  //   cout << i << " ";

  return 0;
}
