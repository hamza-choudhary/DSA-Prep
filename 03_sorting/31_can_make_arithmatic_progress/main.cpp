#include "bits/stdc++.h"

using namespace std;

#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool canMakeArithmeticProgression(vector<int> &arr)
  {
    if (arr.size() <= 2)
    {
      return true;
    }

    int n = arr.size();
    int max = INT_MIN;
    int min = INT_MAX;
    // min and max
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] < min)
      {
        min = arr[i];
      }
      if (arr[i] > max)
      {
        max = arr[i];
      }
    }
    //! https://www.youtube.com/watch?v=jI_MW1J0zeg
    //* we are using king of cyclic sort to find correct position of
    //* arithmetic progression element | min value would be first value and max would be last
    //* formula an = a1 + (n-1)d

    // check d should be integer else return error
    if ((max - min) % (n - 1) != 0)
    {
      return false;
    }

    int d = (max - min) / (n - 1);

    // cyclic sort
    int i = 0;
    while (i < n)
    {
      // if element at its correct position -> a1 + (1)* d
      if (arr[i] == min + i * d)
      {
        i++;
      }
      else if ((arr[i] - min) % d != 0) // an - a1 / d = n - 1 => our position should be 1
      {
        return false;
      }
      else
      {
        // an - a1 / d = n - 1
        int position = (arr[i] - min) / d;

        // our element can never be on left side as left side is sorted 
        // if position we find and actual values are same it means there is duplicate value
        if (position < i || arr[position] == arr[i])
        {
          return false;
        }

        // swap
        int temp = arr[i];
        arr[i] = arr[position];
        arr[position] = temp;
      }
    }

    return true;
  }
};

//! Approach 1: first sort then check diff O(nLogn)
//! Approach 2: using sets O(n)
// class Solution
// {
// public:
//   bool canMakeArithmeticProgression(vector<int> &arr)
//   {
//     // arithmatic progression is an = a1 + (n-1)d
//     // we want to find first d
//     // an would be max term the last term and a1 would be min value

//     // now we create our own progression and put it in set and then we compare out original array if its every element exist in set
//     unordered_set<int> arithmetic_progression;

//     int max = INT_MIN;
//     int min = INT_MAX;
//     // min and max
//     for (int i = 0; i < arr.size(); i++)
//     {
//       if (arr[i] < min)
//       {
//         min = arr[i];
//       }
//       if (arr[i] > max)
//       {
//         max = arr[i];
//       }

//       // put all values to set
//       arithmetic_progression.insert(arr[i]);
//     }

//     // for d formula will be -> d = an - a1 / (n-1)

//     int n = arr.size();
//     int d = max - min;
//     if (d % (n - 1) != 0)
//     {
//       return false;
//     }
//     d /= n - 1;

//     for (int i = 0; i < arr.size(); i++)
//     {
//       if (!arithmetic_progression.count(min))
//       {
//         return false;
//       }

//       // as min was the first value we can add the difference and create our progression
//       min += d;
//     }

//     return true;
//   }
// };

int main()
{
  vector<int> arr{3, 5, 1};
  vector<int> arr2{1, 2, 4};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  cout << s.canMakeArithmeticProgression(arr2) << endl;

  // vector<int> vec = s.smallerNumbersThanCurrent(arr);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}
