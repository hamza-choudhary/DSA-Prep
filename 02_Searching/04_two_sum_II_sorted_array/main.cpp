#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    
    int s=0, e=numbers.size()-1;
    int sum=0;

    while (s < e) 
    {
      sum = numbers[s] + numbers[e];

      if (sum == target) 
      {
        break;
      }
      else if (sum < target)
      {
        s++;
      } else if (sum > target) 
      {
        e--;
      }

    }

    vector<int> result {s+1, e+1};

    return result;
  }
};

int main()
{
  
  Solution s = Solution();

  vector<int> numbers {2,7,11,15};

  vector<int> ans = s.twoSum(numbers,9);

  for (auto a:ans)
  {
    cout << a << ", ";
  }

  return 0;
}