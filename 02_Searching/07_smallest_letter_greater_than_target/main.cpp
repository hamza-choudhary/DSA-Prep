#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  char nextGreatestLetter(vector<char>& letters, char target) {
    
    int s=0;
    int e=letters.size()-1;
    int mid=0;
    

    while (s <= e)
    {
      mid = s + (e-s)/2;

      if (letters[mid] <= target)
      {
        s = mid + 1;
      }
      else if (letters[mid] > target)
      {
        e = mid - 1;
      }
    }

    return letters[s % letters.size()]; //last condition if upper bound is same as target we have to return first element
  }
};

int main()
{
  vector<char> letters {'c','f','j'};

  Solution s = Solution();

  char j;
  cin >> j;

  cout << s.nextGreatestLetter(letters, j) << endl;

  return 0;
}