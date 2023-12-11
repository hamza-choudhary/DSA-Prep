#include "bits/stdc++.h"

using namespace std;

int find_set_bits(int n)
{

  int count = 0;
  while (n > 0)
  {
    if (n & 1 == 1)
      count++;

    n = n >> 1;
  }

  return count;
}

int main()
{
  cout << boolalpha;

  int n = 4;
  cout << "binaryty: ";
  cout << bitset<10>(n) << endl; // 10 is the length of stored no

  cout << find_set_bits(n) << endl;

  return 0;
}