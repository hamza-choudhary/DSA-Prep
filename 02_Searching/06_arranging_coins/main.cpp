#include "bits/stdc++.h"

using namespace std;

//! visit solution on solution tab

// class Solution {
// public:
//   int arrangeCoins(int n) {
//     int s=0, e=n;
//     int mid=0;
//     long long value=0;

//     while (s <= e) 
//     {
//       mid = s + (e - s) /2;

//       value = (mid*(mid+1))/2;

//       if (value==n) 
//       {
//         return mid;
//       }
//       else if (value < n)
//       {
//         s = mid+1;
//       }
//       else if (value > n) 
//       {
//         e = mid-1;
//       }
//     }

//     return e; //because we need lower bound
//   }

// };

//!solution 2

class Solution {
public:
  int arrangeCoins(int n) {
    //just solve the formula k(k+1)/2 <= N by completing square

    return (int) (sqrt(2*(long)n + 0.25) - 0.5);
  }

};

int main()
{
  Solution s = Solution();

  cout << s.arrangeCoins(1);

  return 0;
}