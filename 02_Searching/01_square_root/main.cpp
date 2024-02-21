#include "bits/stdc++.h"

//! https://www.youtube.com/watch?v=eC0b6lUj84w

using namespace std;

class Solution
{
public:
  int mySqrt(int x)
  {
    if (x == 1 || x == 0)
      return x;
    int s = 1;
    int e = x / 2;
    while (s <= e)
    {
      int long mid = s + (e - s) / 2;

      if (mid * mid == x)
      {
        return mid;
      }
      else if (mid * mid > x)
      {
        e = mid - 1;
      }
      else if (mid * mid < x)
      {
        s = mid + 1;
      }
    }
    return e;
  }
};

int main()
{
  Solution s = Solution();

  cout << s.mySqrt(8);

  return 0;
}