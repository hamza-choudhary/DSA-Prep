#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int findKthPositive(vector<int> &arr, int k)
  {

    int s = 0, e = arr.size() - 1, mid = 0;

    int missing_till_mid = 0;

    while (s <= e)
    {
      mid = s + (e - s) / 2;

      missing_till_mid = arr[mid] - (mid + 1);

      if (missing_till_mid < k)
      {
        s = mid + 1;
      }
      else
      {
        e = mid - 1;
      }
    }

    return s + k;
  }
};

int main()
{
  Solution s = Solution();

  vector<int> arr{1, 2, 3, 4};

  cout << s.findKthPositive(arr, 2) << endl;

  return 0;
}