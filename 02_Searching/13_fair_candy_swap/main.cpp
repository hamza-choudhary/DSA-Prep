#include "bits/stdc++.h"

using namespace std;

//! https://www.youtube.com/watch?v=kWnV1xGdqN4


class Solution {
public:
  vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
    
    long sum_alice=0;
    long sum_bob=0;
    int diff=0;
    bool flag=0;

    vector<int> result;

    //sum for alice
    for (int i=0; i<aliceSizes.size(); i++)
    {
      sum_alice += aliceSizes[i];
    }
    // sum for bobSizes
    for (int i=0; i<bobSizes.size(); i++)
    {
      sum_bob += bobSizes[i];
    }

    //! we have to traverse backward because time limit exceeded and it is not the optimal solution -> optimal would be sets

    for (int i=aliceSizes.size()-1; i>=0; i--) 
    {
      for (int j=bobSizes.size()-1; j>=0; j--)
      {
        diff = aliceSizes[i] - bobSizes[j];

        //the reason of + and - is simple math we are actually just swaping two elements 
        //lets say aliceSize[1,2] -> 3 bobSize[2,3]->5 we are goning to swap 2 and 3
        // from alice 3-2+3 = 4, from bob 5-3+2=4 
        // here we are just simplifing it by 2-3 and sub from alilce sum and add to bob sum ans will be same
        if (sum_alice - diff == sum_bob + diff)
        {
          result.push_back(aliceSizes[i]);
          result.push_back(bobSizes[j]);
          
          flag=1;
          break;
        }
      }
      if (flag)
        break;
    }

    return result;
  }
};

int main()
{
  Solution s = Solution();

  vector<int> aliceSizes {1,2};
  vector<int> bobSizes {2,3};

  vector<int> ans  = s.fairCandySwap(aliceSizes, bobSizes);
  
  for (auto a : ans) 
  {
    cout << a << ", ";
  }

  return 0;
}