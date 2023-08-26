#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<int> sortedSquares(vector<int> &nums)
  {
    //! watch this https://youtu.be/fikdT0AI5z4?t=382
    //after square [-7, -4, -1, 2, 3, 6, 10] -> [49, 16, 1 , 4, 9, 36, 100]
    // we can notice that right side of 4 there is an increasing order and left side is increasing

    //square all num
    for (int i=0; i<nums.size(); i++)
    {
      nums[i] *= nums[i]; 
    }

    int head=0;
    int tail=nums.size()-1;

    vector<int> result (nums.size());

    for (int i=result.size()-1; i>=0; i--)
    {
      if (nums[head] > nums[tail])
      {
        result[i] = nums[head];
        head++;
      }
      else 
      {
        result[i] = nums[tail];
        tail--;
      }
    }

    return result;
  }
};

int main()
{
  vector<int> arr{-4,-1,0,3,10};
  vector<int> arr2{1, 2, 3};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  // cout << s.sortedSquares(arr) << endl;

  vector<int> vec = s.sortedSquares(arr);
  for (auto i : vec)
    cout << i << " ";

  return 0;
}
