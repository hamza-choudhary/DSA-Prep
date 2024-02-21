#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int peakIndexInMountainArray(vector<int> &arr)
  {
    int s = 0;
    int e = arr.size() - 1;

    while (s <= e)
    {
      int mid = s + (e - s) / 2;
      // we simply gonna find the 2nd heighest number and when the loop
      // will break we are gona return s
      if (arr[mid] < arr[mid + 1])
      {
        s = mid + 1;
      }
      else
      {
        e = mid - 1;
      }
    }
    return s;
  }
};

int main()
{
  Solution s = Solution();

  vector<int> arr{0, 1, 0};

  cout << s.peakIndexInMountainArray(arr) << endl;

  return 0;
}