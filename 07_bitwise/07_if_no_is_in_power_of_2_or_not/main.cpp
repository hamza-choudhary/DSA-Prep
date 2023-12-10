#include "bits/stdc++.h"

using namespace std;

bool is_power_in_2(int n)
{

  // all numbers in power are like this 
  // 100, 1, 1000, 10000, 10000, 
  // their msb is 1 and all bits are 0

  //! method 1 while (n > 0) take right shift and counts the number of 1's and if count is 1 then return true else false

  //! method 2
  // we know that if number is stored in 8 byte cell the actual number is stored in
  // 7 bits the 8 bit shows that if number is +ve or -ve so range becomes -128 to 127
  // see notes pic

  // when we subtract -1 from number of lets say of number 7 the binary would be 111 -> and binary of 8 is 1000
  // so
  // 1000 -> n
  // 0111 -> n-1
  // now we just have to take & and if its 0 then it means it is in power of 2

  return (n & (n-1)) == 0; //() are must as == have higher presidence
}

int main()
{
  cout << boolalpha;

  cout << is_power_in_2(8) << endl;

  return 0;
}