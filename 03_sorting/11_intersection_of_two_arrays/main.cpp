#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
  {
    unordered_set<int> set1;
    unordered_set<int> set2;
    vector<int> result;

    for (int i = 0; i < nums1.size(); i++)
    {
      set1.insert(nums1[i]);
    }
    for (int i = 0; i < nums2.size(); i++)
    {
      set2.insert(nums2[i]);
    }

    // check if value exist in set1 if yes so add in ans
    for (auto &num : set2)
    {
      if (set1.count(num))
      {
        result.push_back(num);
      }
    }

    return result;
  }
};

int main()
{
  vector<int> arr{1, 2, 2, 1};
  vector<int> arr2{2, 2};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  // cout << s.intersection(arr, arr2) << endl;

  vector<int> vec = s.intersection(arr, arr2);
  for (auto i : vec)
    cout << i << " ";

  return 0;
}
