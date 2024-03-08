#include "bits/stdc++.h"

//! solve this on copy pencil for better under standing

class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int pointer = 1;

    for (int i = 1; i < nums.size(); i++)
    {
      //? if there is unique element put at the place of our pointer and increment it
      if (nums[i] != nums[i - 1])
      {
        nums[pointer] = nums[i];
        pointer++;
      }
    }

    // we have to tell at what point our array is valid
    return pointer;
  }
};

using namespace std;

int main()
{
  // vector<int> arr{1, 2, 3, 4, 5, 6};
  // cout << func_name(arr) << endl;

  // for(auto val: arr)
  //{
  // cout << val << " "
  // }

  return 0;
}