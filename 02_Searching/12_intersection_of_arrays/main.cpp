#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    
    vector<int> space_vec(1000, -1);
    vector<int> result;

    for (int i=0; i<nums1.size(); i++)
    {
      space_vec[nums1[i]] = 0; //0 means first array elements
    }

    for (int i=0;i<nums2.size(); i++)
    {
      if (space_vec[nums2[i]] == 0) 
      {
        space_vec[nums2[i]] = 1; //1 means intersection here
      }
    }

    for (int i=0;i<space_vec.size();i++)
    {
      if (space_vec[i] == 1)
      {
        result.push_back(i);
      }
    }

    return result;
  }
};

int main()
{

  Solution s = Solution();

  vector<int> nums1 {4,9,5};
  vector<int> nums2 {9,4,9, 8,4};

  vector<int> ans  = s.intersection(nums1, nums2);
  
  for (auto a : ans) 
  {
    cout << a << ", ";
  }

  return 0;
}