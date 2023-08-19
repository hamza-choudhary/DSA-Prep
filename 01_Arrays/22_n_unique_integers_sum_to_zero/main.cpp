#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  vector<int> sumZero(int n) {

    vector<int> result;
    int size = n/2;

    if (n%2!=0)
    {
      result.push_back(0);
    }

    if (n==1)
    {
      return result;
    }


    for (int i=0; i<size; i++)
    {
      result.push_back(i+1);
      result.push_back((i+1)*-1);
    }

    return result;
  }
};

int main()
{
  
  Solution s = Solution();

  for (auto a: s.sumZero(1))
  {
    cout << a << ", ";
  }

  

  return 0;
}