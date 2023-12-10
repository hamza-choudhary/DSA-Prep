#include "bits/stdc++.h"

using namespace std;

bool is_odd(int n) {

  //? if last bit is one means odd
  //? take and with mask 1 and we will get last bit

  return (n & 1) == 1;
}

int main()
{
  cout << boolalpha;

  cout << is_odd(3) << endl;

  return 0;
} 