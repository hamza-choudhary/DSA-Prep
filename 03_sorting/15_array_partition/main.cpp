#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int arrayPairSum(vector<int> &nums)
  {
    // same element cannot be a part of pair [same element not same number]
    // no of pairs to add is n
    // size of pair is is of two elements (a1, b1)
    // first we have to sort so we can get max nums of pairs
    //  [6,2,6,5,1,2] after sort we'll get [1,2,2,5,6,6]
    //  now when we will make pairs of two  we ensure that we get max element pairs
    //  pairs will be (1,2) (2,5) (6,6)
    //  min(1,2) + min(2,5) + min(6,6) => 1 + 2 + 6 => 9 output

    sort(nums.begin(), nums.end());

    int sum=0;
    for (int i=0; i<nums.size(); i+=2)
    {
      // both lines are same as we sort the array and pairs is of size 2 and small value
      // is always gona be on left side of pair or left side of pair
      // sum += min(nums[i], nums[i+1]);
      sum += nums[i];
    }

    return sum;
  }
};

int main()
{
  vector<int> arr{6,2,6,5,1,2};
  vector<int> arr2{1, 2, 3};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  cout << s.arrayPairSum(arr) << endl;

  // vector<int> vec = s.thirdMax(arr);
  // for (auto i : vec)
  //   cout << i << " ";

  return 0;
}
