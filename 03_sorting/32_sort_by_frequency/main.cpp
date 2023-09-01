#include "bits/stdc++.h"

using namespace std;


class Solution
{
public:
  vector<int> frequencySort(vector<int> &nums)
  {
    unordered_map<int, int> count;

    for (auto &num: nums) {
      count[num]++;
    }

    sort(nums.begin(), nums.end(), [&count](int &a, int &b) -> bool {
      //if both have same frequency
      if (count[a] == count[b])
      {
        //then return which one is bigger
        return a > b;
      }
      else //if elements are not equal frequencies
      {
        // then return lower frequency element
        return count[a] < count[b];
      }
    });

    return nums;
  }
};

int main()
{
  vector<int> arr{-1,1,-6,4,5,-6,1,4,1};
  vector<int> arr2{1, 2, 4};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  // cout << s.canMakeArithmeticProgression(arr2) << endl;

  vector<int> vec = s.frequencySort(arr);
  for (auto &val : vec)
  {
    cout << val << " ";
  }

  return 0;
}
