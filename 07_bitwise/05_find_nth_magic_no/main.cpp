#include "bits/stdc++.h"

using namespace std;

int find_magic(int n)
{
  //! magic no
  //    5^3  5^2  5^1   
  // 1=  0    0    1   -> 5
  // 2=  0    1    0   -> 25
  // 3=  0    1    1   -> 30
  // 4=  1    0    0   -> 125
  // just add the bits with power of 5

  int base=5, result=0;
  while (n > 0) {

    int last_digit = n & 1;
    n = n >> 1; //remove 1 bit from n

    // just taking the power
    result += last_digit * base;
    base = base * 5; // increase power after every iteration 
  }

  return result;
}

int main()
{
  cout << boolalpha;

  //?1-> 0001
  //?2-> 0001
  int n = 3;
  cout << "binaryty: ";
  cout << bitset<10>(n) << endl; // 10 is the length of stored no
  
  cout << find_magic(n) << endl;

  return 0;
}