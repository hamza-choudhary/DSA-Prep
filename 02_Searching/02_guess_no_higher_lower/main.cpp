#include "bits/stdc++.h"

using namespace std;


class Solution {
public:
  int guessNumber(int n) {
      
    int s=1;
    int pick=0;
    int mid=0;

    while (s <= n)
    {
      mid = s + (n - s)/2; //prevent overfloe errors

      pick = guess(mid); //pre-defined function for this qustion on leetcode

      if (pick == 0)
      {
        return mid;
      }
      else if (pick == 1) //means on greater side right side
      {
        s = mid + 1;
      }
      else if (pick == -1) //means on left side
      {
        n = mid - 1;
      }
    }
    
    return -1;
  }
};

int main()
{
  

  return 0;
}