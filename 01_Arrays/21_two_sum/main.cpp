#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> map; // num | index

    int difference = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      difference = target - nums[i];

      if (map.count(difference))
      {
        return {map[difference], i};
      }

      map[nums[i]] = i;
    }

    return {-1, -1};
  }
};

int main()
{
  // vector<int> arr{1, 2, 3, 4, 5, 6};
  // cout << func_name(arr) << endl;

  // for(auto val: arr)
  //{
  // cout << val << " "
  // }

  return 0;
}