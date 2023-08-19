#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  int findKthPositive(vector<int>& arr, int k) {
    
    /*
      1.find x value 
      2.find x using binary search which is exactly greater than k value
        x = arr[index] - (index + 1)
        x is the value which tells how many nos are missing to left of specific position
      3.in binary search we will get exactly greater value by "s"
      4. how many steps we have to take back
        y = x - k + 1
      5. arr[s] - no of septs back
      6.formula will be 
        = arr[s] - (arr[s] - (s - 1) - k + 1)
        = arr[s] - arr[s] + s - 1 + k - 1 
        = e + k
    */
    
    int s=0, e=arr.size()-1, mid=0;

    int x = 0;

    while (s <= e)
    {
      mid = s + (e-s)/2;

      x = arr[mid] - (mid + 1);

      if (x < k) {
        s = mid+1;
      } else {
        e = mid-1;
      }
    }
    
    return s + k;
  }
};

int main()
{
  Solution s = Solution();

  vector<int> arr {1,2,3,4};

  cout << s.findKthPositive(arr, 2) << endl;


  return 0;
}