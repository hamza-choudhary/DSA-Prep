#include "bits/stdc++.h"

using namespace std;

int find_sum_of_nth_row(int n)
{
  //sum of each row is:
  //ncr1 + ncr2 + ncr3 + ...... ncrn = 2^r -> r1, r2 means row element 1, element 2

  //sum of nth row = 2^n // n is row no

  return 1 << (n); // -> 1 * 2^n
}

int main()
{
  cout << boolalpha;

  cout << find_sum_of_nth_row(3) << endl;

  return 0;
}