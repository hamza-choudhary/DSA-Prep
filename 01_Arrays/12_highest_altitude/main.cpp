#include "bits/stdc++.h"

//! watch video for understanding or draw graph by your self

using namespace std;

class Solution {
public:
  int largestAltitude(vector<int>& gain) {
    int maxAltitude = 0;
    int currentGain = 0;

    for (int i=0;i<gain.size();i++)
    {
      currentGain += gain[i];
      
      if(currentGain > maxAltitude)
        maxAltitude = currentGain;
    }
    return maxAltitude;
  }
};

int main()
{
  vector<int> gain = {-4,-3,-2,-1,4,3,2};
  Solution s = Solution();
  cout << s.largestAltitude(gain);

  return 0;
}