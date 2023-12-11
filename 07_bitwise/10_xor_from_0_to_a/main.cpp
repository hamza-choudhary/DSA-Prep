#include "bits/stdc++.h"

using namespace std;

int range_XOR(int n)
{
  //! method 1: take xor in looop

  //! method 2:
  // when you make take xor of number you will see that
  // there is pattern of 4 which are repeating after 4 numbers

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

int main()
{
  cout << boolalpha;

  int n = 4;
  // cout << "binaryty: ";
  // cout << bitset<10>(n) << endl; // 10 is the length of stored no

  cout << range_XOR(n) << endl;

  return 0;
}