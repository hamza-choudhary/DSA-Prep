#include "bits/stdc++.h"

using namespace std;

// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/description/

class Solution
{
public:
  bool canBeEqual(vector<int> &target, vector<int> &arr)
  {

    unordered_map<int, int> count;

    //after above iteration all maps value should be zero in true case
    //as we add value from 1 array and immediately subtract it 
    //key value
    //1 0
    //2 0
    for (int i=0; i<arr.size(); i++)
    {
      count[arr[i]]++;
      count[target[i]]--;
    }

    for (auto &v : count)
    {
      if (v.second != 0)
      {
        return false;
      }
    }

    return true;
  }
};

int main()
{
  vector<int> arr{1,2,3,4};
  vector<int> arr2{2,4,1,3};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  cout << s.canBeEqual(arr, arr2) << endl;

  // vector<int> vec = s.smallerNumbersThanCurrent(arr);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}
