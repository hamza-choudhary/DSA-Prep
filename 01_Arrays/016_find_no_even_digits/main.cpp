#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  // int findNumbers(vector<int>& nums) {

  //   int counter = 0;
  //   int sub_count = 0;
  
  //   for (int i=0;i<nums.size();i++)
  //   {
  //     sub_count = 0;
  //     while (nums[i] > 0)
  //     {
  //       nums[i] /= 10;
  //       sub_count++;
  //     }
  //     if (sub_count%2 == 0)
  //       counter++;
  //   }

  //   return counter;
  // }
  int findNumbers(vector<int>& nums) {

    int counter = 0;
    int n;
    for (int i=0;i<nums.size();i++)
    {
      n = nums[i];
      if ((n >= 10 && n <= 99) || (n >= 1000 && n <= 9999) || n == 100000)
        counter++;
    }

    return counter;
  }
};

int main()
{

  Solution s = Solution();

  vector<int> nums = {555,901,482,1771};

  cout << s.findNumbers(nums);

  // int n = 1;

  // while (n > 0)
  // {
  //   int temp = n%10;
  //   cout << temp;
  //   n /= 10;
  // }

  return 0;
}