#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
  {
    unordered_map<int, int> map1;

    vector<int> result;

    for (int i = 0; i < nums1.size(); i++)
    {
      map1[nums1[i]]++;
    }

    // now if element occurs in map we decrement its count by one
    for (int i = 0; i < nums2.size(); i++)
    {
      if (map1[nums2[i]] > 0)
      {
        result.push_back(nums2[i]);
        map1[nums2[i]]--;
      }
    }

    return result;
  }
};

int main()
{
  vector<int> arr{4,9,5};
  vector<int> arr2{9,4,9,8,4};

  Solution s = Solution();
  // cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  // cout << s.intersection(arr, arr2) << endl;

  vector<int> vec = s.intersect(arr, arr2);
  for (auto i : vec)
    cout << i << " ";

  return 0;
}
