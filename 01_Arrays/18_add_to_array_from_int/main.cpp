#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  vector<int> addToArrayForm(vector<int>& num, int k) {
    
    int n = num.size()-1;
    vector<int> result;

    while (k > 0 || n >= 0)
    {
      if (n >= 0)
      {
        result.push_back((num[n] + k) % 10); //gives last digit
        
        k = (num[n] + k) / 10; //removes last digit and update k
      }
      else
      {
        result.push_back(k % 10);
        
        k /= 10;
      }

      n--;
    }

    reverse(result.begin(), result.end());

    return result;
  }
};

int main()
{

  Solution s = Solution();

// [3,8,0,3,0,2,7,0,7,6,4,9,9,1,7,6,6,1,6,4]
// 670

// [0]
// 23

// [1,2,0,0]
// 34




  vector<int> num {1,2,0,0};

  num = s.addToArrayForm(num, 34);
  // s.addToArrayForm(num, 34);

  // cout << "size " << num.size() << endl;

  for (auto n : num)
  {
    cout << n << " ";
  }

  return 0;
}