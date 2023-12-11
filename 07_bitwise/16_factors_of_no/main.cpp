#include "bits/stdc++.h"

using namespace std;

vector<int> factors(int n)
{
  //! method 1: find all numbers which can divide the n

  //! method 2:

  vector<int> result;
  vector<int> last_roots; // for sorting purpose

  for (int i = 1; i * i <= n; i++)
  { // same concept which use in prime nos
    if (n % i == 0)
    {
      if (n / i == i)
      {
        result.push_back(i);
      }
      else
      {
        result.push_back(i);
        // result.push_back(n / i);
        last_roots.push_back(n / i);
      }
    }
  }

  for (int i = last_roots.size() - 1; i >= 0; i--)
  {
    result.push_back(last_roots[i]);
  }

  return result;
}

int main()
{
  cout << boolalpha;

  int n = 5;
  vector<int> f = factors(20);

  for (auto val : f)
  {
    cout << val << " ";
  }

  return 0;
}

// Explanation of the Code

// The code uses a loop to iterate through numbers from 1 to the square root of n. For each number i, 
// it checks if i is a factor of n (i.e., if n % i == 0). There are two cases here:

//     n / i == i: This condition checks if the factor i and its corresponding factor n / i are the same. 
// This happens when i is the square root of n. In this case, you only want to add this factor once to the 
// result vector. For example, if n = 25, i will be 5 at some point, and 25 / 5 is also 5. You add 5 only once to the list of factors.

//     else part: If n / i is not equal to i, it means i and n / i are distinct factors. 
// You add i to the result vector immediately, but n / i is added to a separate vector last_roots. 
// This separate vector is used to store the larger factors, which you later add in reverse order to 
// the result vector. This approach ensures that the factors are listed in ascending order.

// Example

// Let's consider n = 30.

//     When i = 1: 30 % 1 == 0, add 1 to result, and 30 / 1 = 30 to last_roots.
//     When i = 2: 30 % 2 == 0, add 2 to result, and 30 / 2 = 15 to last_roots.
//     When i = 3: 30 % 3 == 0, add 3 to result, and 30 / 3 = 10 to last_roots.
//     When i = 5: 30 % 5 == 0, add 5 to result, and 30 / 5 = 6 to last_roots.

// ... and so on, until i > sqrt(30).

// Finally, you reverse the contents of last_roots and add them to result. So, result will have factors in ascending order: [1, 2, 3, 5, 6, 10, 15, 30].