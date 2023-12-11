#include "bits/stdc++.h"

using namespace std;

double find_sqrt(int n, int precision)
{
  // we can apply binary search
  // we know that square root can never be greater than n

  int s = 0, e = n;

  while (s <= e)
  {
    int mid = s + (e - s) / 2;

    if ((mid * mid) == n)
    {
      return mid;
    }
    else if ((mid * mid) < n)
    {
      s = mid + 1;
    }
    else if ((mid * mid) > n)
    {
      e = mid - 1;
    }
  }

  double root = e; // i think it should equal to end -> e
  double increment = 0.1;

  // for every decimal no we have to make a loop
  for (int i = 0; i <= precision; i++)
  {
    while (root * root <= n)
    {
      root += increment;
    }

    root -= increment; // check chat gpt for why you do this
    increment /= 10;   // means add new decimal
  }

  return root;
}

int main()
{
  cout << boolalpha;

  int n = 5;

  cout << find_sqrt(5, 3) << endl;

  return 0;
}