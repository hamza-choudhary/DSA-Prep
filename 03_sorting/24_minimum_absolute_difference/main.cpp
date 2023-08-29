#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  vector<vector<int>> minimumAbsDifference(vector<int> &arr)
  {
    //! Approach 1: will be first find minimum difference then again loop through and put all number which has same difference
    //! Approach 2: we check minimum on fly if we find new minimum we clear whole array and populate new one

    vector<vector<int>> result;

    sort(arr.begin(), arr.end());

    int min = INT_MAX;

    for (int i=0; i<arr.size() - 1; i++) //-1 to prevent out of bounds
    {
      int diff = arr[i+1] - arr[i];

      if (diff < min) //means we find a new minimum
      { 
        min = diff;

        // result.clear(); // Clear all elements
        // result = vector<vector<int>>(); //! Reassign to an empty vector more effieciet way as clear did not release memory
        result.clear();
        result.push_back({arr[i], arr[i+1]});
      }
      else if (diff == min)
      {
        result.push_back({arr[i], arr[i+1]}); // {} brackets create a new vector
      }
    }

    return result;
  }
};

int main()
{
  vector<int> arr{4, 2, 1, 3};
  vector<int> arr2{2, 1, 4, 3, 9, 6};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  // cout << s.relativeSortArray(arr) << endl;

  vector<vector<int>> vec = s.minimumAbsDifference(arr);
  for (int i=0; i<vec.size(); i++)
  {
    for (int j=0; j<vec[0].size(); j++)
    {
      cout << vec[i][j] << " "; 
    }
    cout << endl;
  }

  return 0;
}
