#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  int specialArray(vector<int> &nums)
  {


    //!NOTE: although we had to create bucket of 1000 elements but we can
    // ! 1. Find max element and create bucket till max no.
    // ! 2. create bucket of size of nums and if nums[i] is >= nums.size we simply increment last element.
    // ! because we we will do commulative sum its gonna repeat same sum until it hit next non-zero value [1, 0, 0, 3] => [1, 1, 1, 4]
    // ! we will do commulative sum in reverse order as it will tell us how many elements are greater than current index
    
    int n = nums.size(); // size of array
    vector<int> bucket(n + 1);

    for (int &num : nums)
    {
      if (num >= n) // if number in array is greater or equal to our length
      {
        bucket[n]++; // increment last element of our bucket
      }
      else
      {
        bucket[num]++;
      }
    }

    
    for (int i = bucket.size() - 2; i >= 0; i--)
    {
      //* store cumulative sum
      bucket[i] = bucket[i] + bucket[i + 1];
    }

    //* Now for every index in arr, the corresponding value represents the number of
    //* elements that are greater than or equal to index in nums. (Concept of counting sort)

    //* now we will check if for any index in arr, if we have arr[index] == index then that will be our answer.

    for (int i=0; i<bucket.size(); i++)
    {
      if (bucket[i] == i)
        return i;
    }
    
    return -1;
  }
};

// int res = 0;
// for(int i = counts.length-1; i > 0; i--) {
//     res += counts[i];
//     if(res == i)
//         return i;
// }

// return -1;

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
