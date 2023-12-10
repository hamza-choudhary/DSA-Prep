#include "bits/stdc++.h"

using namespace std;

bool find_i_bit(int n, int bit) {

  int mask = 1 << (bit - 1); //because bits idx start from 0

  //now take and 
  return mask & n;
}

int main()
{
  cout << boolalpha;
  
  //? 19-> 0001 0011
  cout << find_i_bit(19, 3) << endl;

  return 0;
} 