#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    
    vector<bool> result;

    int max_candy = INT_MIN;
    for (int i=0;i<candies.size();i++)
    {
      if (candies[i] > max_candy)
        max_candy = candies[i];
    }

    for (int i=0;i<candies.size();i++)
    {
      result.push_back(candies[i]+extraCandies >= max_candy);
    }

    return result;
  }
};

int main()
{
  Solution s = Solution();
  vector<int> candies = {4,2,1,1,2};
  vector<bool> result = s.kidsWithCandies(candies, 1);

  cout << boolalpha;
  for (auto ans : result)
  {
    cout << ans << ", ";
  }

  return 0;
}