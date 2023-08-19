#include "bits/stdc++.h"

//! https://www.youtube.com/watch?v=eC0b6lUj84w

using namespace std;

class Solution {
public:
  int mySqrt(int x) {
    
    long long s = 0, e = INT_MAX, mid=0;
    int ans = 0;


    while (s <= e)
    {
      mid = s + (e - s)/2; //prevent overfloe errors

      if (mid*mid <= x)
      {
        ans = mid;
        s = mid + 1;
      }
      else 
      {
        e = mid - 1;
      }
    }

    return ans;
  }
};

int main()
{
  Solution s = Solution();

  cout << s.mySqrt(8);
  
  return 0;
}