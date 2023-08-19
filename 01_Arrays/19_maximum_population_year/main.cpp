#include "bits/stdc++.h"

using namespace std;

//! https://www.youtube.com/watch?v=MYC7t8GSg0A watch this for optimized approach

class Solution {
public:
  int maximumPopulation(vector<vector<int>>& logs) {
    
    vector<int> result (101, 0); //from 1950 to 2050

    for (int i=0;i<logs.size();i++)
    {
      for (int j=logs[i][0]; j<logs[i][1]; j++)
      {
        result[j-1950]++;
      }
    }

    int max_year = 1950;
    int max_value = 0;
    for (int i=0; i<result.size();i++)
    {
      if (result[i] > max_value)
      {
        max_value = result[i];
        max_year = i + 1950;
      }
    }

    return max_year;
  }
};

//!optimized appraoch
// class Solution {
// public:
//   int maximumPopulation(vector<vector<int>>& logs) {
    
//     vector<int> result (101, 0); //from 1950 to 2050

//     for (int i=0;i<logs.size();i++)
//     {
//       result[logs[i][0] - 1950]++;
//       result[logs[i][1] - 1950]--;
//     }

//     //running sum
//     for (int i=1; i<result.size();i++)
//     {
//       result[i] += result[i-1];
//     }

//     int max_year = 1950;
//     int max_value = 0;
//     for (int i=0; i<result.size();i++)
//     {
//       if (result[i] > max_value)
//       {
//         max_value = result[i];
//         max_year = i + 1950;
//       }
//     }

//     return max_year;
//   }
// };

int main()
{
  
  Solution s = Solution();

  vector<vector<int>> logs = {{1950,1961},{1960,1971},{1970,1981}};
  
  cout << s.maximumPopulation(logs) << endl;

  return 0;
}