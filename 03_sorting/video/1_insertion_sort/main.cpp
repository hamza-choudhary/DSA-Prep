#include "bits/stdc++.h"

using namespace std;

template <typename S>
ostream &operator<<(ostream &os, const vector<S> &vector)
{
  for (auto element : vector)
    os << element << " ";
  return os;
}

void insertion_sort(vector<int> &arr)
{
  int n = arr.size();

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j > 0; j--)
    {
      if (arr[j] < arr[j-1])
      {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      }
      else
      {
        break;
      }
    }
  }
}

int main()
{
  vector<int> arr{0, 4, 6, 3, 1};
  cout << arr << endl;

  insertion_sort(arr);

  cout << arr << endl;

  return 0;
}