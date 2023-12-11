#include "bits/stdc++.h"

using namespace std;

bool is_prime(int n)
{
  // find prime of 36
  // 1, 2, 3, 4 ,5, 6, 7, 8, 9 10 ...... 36
  // prime will only exist <= sqrt(n) -> e.g 4x9 = 36 we dont need to check 9x4 = 36 it would be same thats why isPrime exist <= sqrt(n)

  if (n <= 1)
  {
    return false;
  }

  int i = 2;

  while (i * i <= n) // i <= sqrt(n)
  {
    if (n % i == 0)
    {
      return false;
    }

    i++;
  }

  return true;
}

int main()
{
  cout << boolalpha;

  int n = 5;
  // cout << "binaryty: ";
  // cout << bitset<10>(n) << endl; // 10 is the length of stored no

  //! we can also  find all primes in range x to y
  cout << is_prime(n) << endl;

  return 0;
}