#include "bits/stdc++.h"

using namespace std;

int power(int base, int power)
{
  int ans = 1;

  while (power > 0)
  {
    if ((power & 1) == 1) //check if last bit is 0 or 1 -> ref 01_odd_even
    {
      ans *= base;
    }

    base *= base;
    power = power >> 1;
  }

  return ans;
}

int main()
{
  cout << boolalpha;

  cout << power(3, 3) << endl;

  return 0;
}