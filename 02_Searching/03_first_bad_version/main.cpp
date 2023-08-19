#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  int firstBadVersion(int n) {
    
    int s=1;
    bool bad=0;
    int mid=0;

    while (s <= n)
    {
      mid = s + (n - s)/2; //prevent overfloe errors

      bad = isBadVersion(mid);

      if (bad) //right side 
      {
        n = mid - 1;
      } 
      else
      {
        s = mid + 1;
      }
    }
    
    return s;
  }
};

int main()
{
  

  return 0;
}