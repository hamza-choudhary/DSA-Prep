#include "bits/stdc++.h"

using namespace std;

// Here there will be 2 cases
//   if element/number is present in the map that means for example at any time in 
//     unordered map we saw count of num(element) 1 is 2 thats means currunt element can 
//     form 2 pair with previous 1, so at that time we will add this count in answer and also increase the count of the element in out map
//   If element/number is not present in the map, it means this is the first time we're seeing this number, so we initialize its count to 1.


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count; 
        int pairs=0;
        for (auto &n: nums) {
          pairs += count[n];
          count[n]++;
        }
        return pairs;
    }
};

// class Solution {
// public:
//   int numIdenticalPairs(vector<int>& nums) {
//     int count = 0;
    
//     for(int i=0;i<nums.size();i++)
//     {
//       for (int j=i+1;j<nums.size();j++)
//       {
//         if (nums[i] == nums[j] && i < j)
//           count++;
//       }
//     }
//     return count;
//   }
// };

int main()
{
  Solution s = Solution();
  vector<int> input = {1,2,3};
  int count = s.numIdenticalPairs(input);

  cout << count;

  return 0;
}