#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  int peakIndexInMountainArray(vector<int>& arr) {
    
    long s=0;
    long mid=0, e=arr.size()-1;
    int i;


    while (s <= e)
    {
      mid = s + (e-s)/2;

      if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
      {
        return mid;
      }
      else if (arr[mid] < arr[mid+1])
      {
        s = mid+1;
        i = mid;
      }
      else if (arr[mid] > arr[mid+1])
      {
        e = mid-1;
        i = mid;
      }

    }
    
    return i;
  }
};

int main()
{
  Solution s = Solution();

  vector<int> arr {0, 1, 0};

  cout << s.peakIndexInMountainArray(arr) << endl;

  return 0;
}