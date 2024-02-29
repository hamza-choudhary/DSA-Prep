#include "bits/stdc++.h"

// https://youtu.be/70tx7KcMROc?t=5175
// https :// leetcode.com/problems/happy-number/

using namespace std;

class Solution
{
public:
  bool isHappy(int n)
  {
    int slow = n;
    int fast = n;

    do
    {
      slow = findSquare(slow);
      fast = findSquare(findSquare(fast)); // for 2 times ahead
    } while (fast != slow);

    if (slow == 1) {
      return true;
    }
    return false;
  }

  int findSquare(int n)
  {
    int ans = 0;
    while (n > 0)
    {
      int remainder = n % 10;
      ans += remainder * remainder;
      n = n / 10;
    }

    return ans;
  }
};

int main()
{
  // vector<int> arr{1, 2, 3, 4, 5, 6};
  // cout << func_name(arr) << endl;

  // for(auto val: arr)
  //{
  // cout << val << " "
  // }

  return 0;
}