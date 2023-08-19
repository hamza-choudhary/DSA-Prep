#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  bool isPerfectSquare(int num) {
    
    int s=0;
    long long e = num/2;
    long long mid=0;

    if (num == 1) 
    {
      return true;
    } 
    else if (num == 0) 
    {
      return false;
    }

    while (s <= e)
    {
      mid = s + (e - s)/2;

      if (mid*mid == num) 
      {
        return true;
      }
      else if (mid*mid < num) 
      {
        s = mid + 1;
      }
      else if (mid*mid > num)
      {
        e = mid - 1;
      }
    }
    
    return false;
  }
};

int main()
{
  Solution s = Solution();

  // int n;
  // cin >> n;

  // cout << boolalpha << endl;
  cout << s.isPerfectSquare(14) << endl;

  return 0;
}