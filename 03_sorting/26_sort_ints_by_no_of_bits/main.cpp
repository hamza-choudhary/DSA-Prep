#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
      
      sort(arr.begin(), arr.end(), [](const int &a, const int &b) -> bool {
        int x = a;
        int y = b;

        int count_a=0;
        int count_b=0;

        while(x)
        {
          x = x & (x - 1);
          count_a++;
        }
        while(y)
        {
          y = y & (y - 1);
          count_b++;
        }

        if (count_a == count_b)
          return b > a;

        return count_b > count_a;
      });

      return arr;
    }
};

int main()
{
  vector<int> arr{1024,512,256,128,64,32,16,8,4,2,1};
  vector<int> arr2{0,1,2,3,4,5,6,7,8};

  Solution s = Solution();
  cout << boolalpha << endl;

  // s.merge(arr, m, arr2, n);
  // cout << s.relativeSortArray(arr) << endl;

  vector<int> vec = s.sortByBits(arr2);
  for (auto &val : vec)
  {
    cout << val << " ";
  }

  return 0;
}
