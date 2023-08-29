#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
  {
    vector<int> bucket (1001);
    vector<int> result;

    for (int i=0; i< arr1.size(); i++)
    {
      bucket[arr1[i]]++;
    }

    //get arr2 elements in order
    for (int i=0; i<arr2.size(); i++)
    {
      //it will keep pushing same number until its all occurrence will become zero
      while (bucket[arr2[i]] > 0)
      {
        result.push_back(arr2[i]);
        bucket[arr2[i]]--;
      }
    }

    //now push remaining numbers in bucket in result
    for (int i=0; i<bucket.size(); i++)
    {
      while (bucket[i] > 0)
      {
        result.push_back(i);
        bucket[i]--;
      }
    }

    return result;
  }
};

int main()
{
  vector<int> arr{2,3,1,3,2,4,6,7,9,2,19};
  vector<int> arr2{2,1,4,3,9,6};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  // cout << s.relativeSortArray(arr) << endl;

  vector<int> vec = s.relativeSortArray(arr, arr2);
  for (auto i : vec)
    cout << i << " ";

  return 0;
}
