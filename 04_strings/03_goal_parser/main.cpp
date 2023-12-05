#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  string interpret(string command)
  {
    string result = "";
    int i = 0;
    while (i < command.size())
    {
      if (command[i] == 'G')
      {
        result += "G";
        i++;
      }
      else if (command[i] == '(' && command[i + 1] == ')')
      {
        result += "o";
        i += 2;
      }
      else
      {
        result += "al";
        i += 4;
      }
    }

    return result;
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};

  cout << s.interpret("G()()()()(al)") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}