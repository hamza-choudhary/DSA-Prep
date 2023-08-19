#include "bits/stdc++.h"

using namespace std;

//! WHEN GIVEN NO.S FROM RANGE 1 TO N => USE CYCLIC SORT

template <typename S>
ostream &operator<<(ostream &os, const vector<S> &vector)
{
  for (auto element : vector)
    os << element << " ";
  return os;
}

void cyclic_sort(vector<int> &arr)
{

  int i = 0;

  while (i < arr.size())
  {
    //! Range [1, N] -> correct = arr[i] - 1 ?? Range [0, N] -> correct = arr[i]
    int correct_index = arr[i] - 1;
    if (arr[i] != arr[correct_index])
    {
      int temp = arr[i];
      arr[i] = arr[correct_index];
      arr[correct_index] = temp;
    }
    else
    {
      i++; 
    }
  }
}

int main()
{
  vector<int> arr{1, 4, 3, 2};
  cout << arr << endl;

  cyclic_sort(arr);

  cout << arr << endl;

  return 0;
}