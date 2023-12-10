#include "bits/stdc++.h"

using namespace std;



int set_ith_bit(int n, int bit)
{
  int mask = 1 << (bit - 1);

  return n | mask;
}

int reset_ith_bit(int n, int bit)
{
  //? 1 -> 0
  //? 0 -> 0

  int mask = 1 << (bit - 1);
  mask = ~mask; // e.g 1110111 -> make all 0 to 1 and our shifted bit to 0

  return n & mask;
}

int flip_ith_bit(int n, int bit)
{
  //? a ^ 1 = ~a
  //? a ^ 0 = a
  //? a ^ a = 0

  int mask = 1 << (bit - 1);
  return n ^ mask;
}

int main()
{
  cout << boolalpha;

  cout << "before: ";
  cout << bitset<10>(19) << endl; // 10 is the length of stored no
  cout << "after:  ";
  //?19-> 0001 0011
  // cout << bitset<10>(set_ith_bit(19, 3)) << endl; // 10 is the length of stored no
  cout << bitset<10>(reset_ith_bit(19, 2)) << endl; // 10 is the length of stored no

  return 0;
}