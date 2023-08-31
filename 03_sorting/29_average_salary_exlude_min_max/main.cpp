#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  double average(vector<int> &salary)
  {
    int min = INT_MAX;
    int max = INT_MIN;
    double sum = 0;

    for (int i=0; i<salary.size(); i++)
    {
      //we find min, max, sum as we go
      //? for min
      if (salary[i] < min)
      {
        min = salary[i];
      }
      //? for max
      if (salary[i] > max)
      {
        max = salary[i];
      }

      sum += salary[i];
    }

    //? remove min and max from sum

    sum = sum - min - max;

    return sum/(salary.size() - 2); // -2 as we removed the min and max 2 elements from array  
  }
};

int main()
{
  vector<int> arr{1000,2000,3000};
  vector<int> arr2{6, 5, 4, 8};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  cout << s.average(arr) << endl;

  // vector<int> vec = s.smallerNumbersThanCurrent(arr);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}
