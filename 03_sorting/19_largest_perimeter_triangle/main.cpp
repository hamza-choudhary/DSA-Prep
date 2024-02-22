#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int largestPerimeter(vector<int> &nums)
  {
    //! to make traingle these conditions must satisfy
    // https://www.youtube.com/watch?v=2t2G4yFp2Zk
    //* we only have to check this bcz we have sorted array and we are traversing in reverse it 
    //* ensures that if first condition satisfies others will too
    //! s1 + s2 > s3 -> use this only
    // s1 + s3 > s2
    // s2 + s3 > s1

    // the question is we have to find these sides as maximum the sides will be
    // the heighest the parameter will be (s1 + s2 + s2)

    // sol
    // we first sort the nums then last 3 nums will max then we can move left one by one to find our sides

    // as the array will be sorted we can only check
    // 1st condition as s3 will be largest after sort then other 2 condiotns will be satisfiesd

    sort(nums.begin(), nums.end());

    for (int i = nums.size() - 1; i >= 2; i--)
    {
      if (nums[i - 2] + nums[i - 1] > nums[i])
      {
        return nums[i - 2] + nums[i - 1] + nums[i];
      }
    }

    return 0;
  }
};

int main()
{
  vector<int> arr{1, 2, 1, 10};
  vector<int> arr2{1, 2, 3};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  cout << s.largestPerimeter(arr) << endl;

  // vector<int> vec = s.sortArrayByParityII(arr);
  // for (auto i : vec)
  //   cout << i << " ";

  return 0;
}
