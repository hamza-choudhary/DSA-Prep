#include "bits/stdc++.h"

using namespace std;

int XOR_from_0_to_a(int n)
{
  if (n % 4 == 0)
  {
    return n;
  }

  if (n % 4 == 1)
  {
    return 1;
  }

  if (n % 4 == 2)
  {
    return n + 1;
  }
  // 4th no:
  return 0;
}

int XOR_from_a_to_b_range(int a, int b)
{
  //!method 1: only for check it will give time limit exceed for large numberes
  int ans = 0;
  for (int i=a; i<=b; i++) {
    ans = ans ^ i;
  }

  cout << "method1: only for check: " << ans << endl;

  //! Method 2: ref: https://youtu.be/fzip9Aml6og?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=7751
  return XOR_from_0_to_a(b) ^ XOR_from_0_to_a(a - 1);
}

int main()
{
  cout << boolalpha;

  int a = 3;
  int b = 9;
  // cout << "binaryty: ";
  // cout << bitset<10>(n) << endl; // 10 is the length of stored no

  cout << "method2: optimized ans: " << XOR_from_a_to_b_range(a, b) << endl;

  return 0;
}