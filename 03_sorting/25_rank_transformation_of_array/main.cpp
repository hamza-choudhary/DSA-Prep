#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<int> arrayRankTransform(vector<int> &arr)
  {
    vector<int> copy_arr (arr);
    sort(copy_arr.begin(), copy_arr.end());

    unordered_map<int, int> rank; //number | rank

    //assign rank;
    for (int i=0; i<copy_arr.size(); i++)
    {
      //emplace(key, value)
      // if key exiist it will not create a new element and size will remain same 
      rank.emplace(copy_arr[i], rank.size() + 1); // + 1 as rank start from 1 not 0
    }

    //not replace element in arr with ranks
    for (int i=0; i<arr.size(); i++)
    {
      arr[i] = rank[arr[i]];
    }

    return arr;
  }
};

int main()
{
  vector<int> arr{37,12,28,9,100,56,80,5,12};
  vector<int> arr2{2, 1, 4, 3, 9, 6};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  // cout << s.relativeSortArray(arr) << endl;

  vector<int> vec = s.arrayRankTransform(arr);
  for (auto &val : vec)
  {
    cout << val << " ";
  }

  return 0;
}
