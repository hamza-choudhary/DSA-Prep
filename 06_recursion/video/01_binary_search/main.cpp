#include "bits/stdc++.h"

using namespace std;

int binary_search(vector<int> arr, int target, int s, int e)
{
  if (s > e)
  {
    return -1;
  }

  int mid = s + (e - s) / 2;

  if (arr[mid] == target)
  {
    return mid;
  }
  if (arr[mid] < target)
  {
    return binary_search(arr, target, mid + 1, e);
  }
  // if (arr[mid] > target)
  // {
  return binary_search(arr, target, s, mid - 1);
  // }
}

int main()
{

  vector<int> arr{1, 2, 3, 4, 5, 6};

  cout << binary_search(arr, 4, 0, arr.size() - 1) << endl;

  return 0;
}