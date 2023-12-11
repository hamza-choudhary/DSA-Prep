#include "bits/stdc++.h"

using namespace std;

vector<int> sieve_of_eratosthenes(int n)
{
  //! method 1: we can check all nos whether they are prime or not

  //! method 2: eliminate all multiples of numbers as we go on
  //* ref: https://youtu.be/lmSpZ0bjCyQ?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=1616
  vector<bool> all_numbers(n + 1, false); // false means prime i.e all nos are prime

  for (int i = 2; i * i <= n; i++)
  {
    if (!all_numbers[i])
    {
      // turn all multiples to true -> not prime
      for (int j = i * 2; j <= n; j += i)
      {
        all_numbers[j] = true;
      }
    }
  }

  vector<int> result;

  for (int i = 2; i < all_numbers.size(); i++)
  {
    if (all_numbers[i] == false)
    {
      result.push_back(i);
    }
  }

  return result;
}

int main()
{
  // time complexity => n/2 + n/3 + n/5 + n/7 + ..... -> harmonic progression
  // -> n (1/2 + 1/3 + 1/5 + 1/7 + .....)
  // -> log(log N)
  // -> total O(N * log(log N))
  // space complexity => O(n)
  cout << boolalpha;

  int n = 5;

  vector<int> result = sieve_of_eratosthenes(40);

  for (auto val : result)
  {
    cout << val << ", ";
  }

  return 0;
}