#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int specialArray(vector<int> &nums)
  {
    int n = nums.size(); // size of array
    vector<int> bucket(n + 1);

    for (int &num : nums)
    {
      // if number in array is greater or equal to our length
      if (num >= n)
      {
        bucket[n]++; // increment last element of our bucket
      }
      else
      {
        bucket[num]++;
      }
    }

    // reason of -1 instead of -2 becasue our bucket is of size n + 1
    //  and we telling to iterate n + 1 - 2 = n - 1 or bucket.size -1
    for (int i = bucket.size() - 2; i >= 0; i--)
    {
      //* store cumulative sum
      bucket[i] = bucket[i] + bucket[i + 1];
    }

    //* Now for every index in arr, the corresponding value represents the
    // number of
    //* elements that are greater than or equal to index in nums. (Concept
    // of counting sort)

    //* now we will check if for any index in arr, if we have arr[index] ==
    // index then that will be our answer.

    for (int i = 0; i < bucket.size(); i++)
    {
      if (bucket[i] == i)
        return i;
    }

    return -1;
  }
};

int main()
{
  vector<int> arr{3, 5};
  vector<int> arr2{1, 2, 4};

  Solution s = Solution();
  cout << boolalpha << endl;

  cout << s.specialArray(arr) << endl;

  // vector<int> vec = s.frequencySort(arr);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}
