#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int counter = 0;
        for (int i=0;i<nums.size();i++)
        {
          counter = 0;
          for (int j=0;j<nums.size();j++)
          {
            if (nums[j] < nums[i])
            {
              counter++;
            }
          }
          result.push_back(counter);
        }
      return result;
    }
};

int main()
{
  

  return 0;
}