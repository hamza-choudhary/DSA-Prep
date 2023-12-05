#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  string defangIPaddr(string address)
  {
    string result = "";
    for (int i=0; i<address.size(); i++) 
    {
      if (address[i] == '.') {
        result += "[.]";
        continue;
      }
      result += address[i];
    }
    
    return result;
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  cout << s.defangIPaddr("1.1.1.1") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}