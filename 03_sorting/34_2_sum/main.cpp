#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    vector<int> result;

    unordered_map<int, int> previous_values; // [needed value] = index

    for (int i = 0; i < nums.size(); i++)
    {
      int difference = target - nums[i];

      if (previous_values.count(difference))
      {
        return {previous_values[difference], i};
      }

      previous_values[nums[i]] = i;
    }

    for (auto &val: previous_values)
    {
      cout << val.first << " " << val.second << endl;
    }

    return {-1, -1};
  }
};

int main()
{
  vector<int> arr{2, 7, 11, 15};
  vector<int> arr2{1, 2, 4};

  Solution s = Solution();
  cout << boolalpha << endl;

  // cout << s.specialArray(arr) << endl;

  vector<int> vec = s.twoSum(arr, 9);
  for (auto &val : vec)
  {
    cout << val << " ";
  }

  return 0;
}
