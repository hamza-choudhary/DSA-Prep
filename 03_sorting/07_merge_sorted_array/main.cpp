#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {
    //loop should continue unless nums 1 end as its size is m + n
    int i=m-1;
    int j=n-1;
    int k=m+n-1;

    while (i>=0 && j >=0)
    {
      if (nums2[j] > nums1[i])
      {
        nums1[k] = nums2[j];
        j--;
      }
      else {
        nums1[k] = nums1[i];
        i--;
      }

      k--;
    }

    //we have to check last case
    while (j >= 0)
    {
      nums1[k] = nums2[j];
      k--;
      j--;
    }
    
  }
};

int main()
{
  vector<int> arr{0};
  vector<int> arr2{1};
  int m = 0;
  int n = 1;

  Solution s = Solution();
  cout << boolalpha << endl;

  s.merge(arr, m, arr2, n);
  // cout << s.merge(arr, m, arr2, n) << endl;

  // vector<int> vec = s.firstMissingPositive(arr);
  for (auto i: arr)
    cout << i << " ";

  return 0;
}
