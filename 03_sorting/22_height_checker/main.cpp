#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int heightChecker(vector<int> &heights)
  {
    vector<int> bucket(101); // bucket which go from 1 to 100 & initialize all to 0

    // step 1: count occurrences of each height
    for (int i = 0; i < heights.size(); i++)
    {
      bucket[heights[i]]++;
    }

    int result = 0;
    int height_pointer = 1; // expected height pointer (1 index means 1 value 2 index means 2 value)

    // step 2: iterate over heights array
    for (int i = 0; i < heights.size(); i++)
    {
      // step 3: find the next non-zero count (value) in bucket
      while (bucket[height_pointer] == 0)
      {
        height_pointer++; // Move to next expected height 0r next value in bucket
      }

      // step 4: compare current height with our expected height in bucket
      if (height_pointer != heights[i])
      {
        result++;
      }

      // step 5: decrement the count of expected height in bucket
      bucket[height_pointer]--;
    }

    return result;
  }
};

int main()
{
  vector<int> arr{1, 1, 4, 2, 1, 3};
  vector<int> arr2{1, 2, 3};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  cout << s.heightChecker(arr) << endl;

  // vector<int> vec = s.heightChecker(arr);
  // for (auto i : vec)
  //   cout << i << " ";

  return 0;
}
