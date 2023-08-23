#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<int> sortArrayByParity(vector<int> &nums)
  {
    // one pointer at start and second at end
    //  if i element is odd we have to find even from last so we can swap then move i to left and j to right until they meet
    int i = 0;
    int j = nums.size() - 1;
    while (i < j)
    {
      if (nums[i] % 2 != 0) // first element odd
      {
        //  swap only if last is also even else just move to right to find even
        if (nums[j] % 2 == 0)
        {
          // swap
          int temp = nums[i];
          nums[i] = nums[j];
          nums[j] = temp;
          i++;
        }
        j--;
      } 
      else // first element is even
      {
        i++;
      }
    }
    return nums;
  }
};

int main()
{
  vector<int> arr{6, 2, 5, 1};
  vector<int> arr2{1, 2, 3};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  // cout << s.maximumProduct(arr2) << endl;

  vector<int> vec = s.sortArrayByParity(arr);
  for (auto i : vec)
    cout << i << " ";

  return 0;
}
