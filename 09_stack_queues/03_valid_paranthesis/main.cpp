// https://youtu.be/S9LUYztYLu4?t=7597

#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool isValid(string s)
  {
    stack<char> stack;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '(' || s[i] == '[' || s[i] == '{')
      {
        stack.push(s[i]);
      }
      else
      {
        if (stack.empty())
        {
          return false;
        }

        if ((stack.top() == '(' && s[i] == ')') ||
            (stack.top() == '[' && s[i] == ']') ||
            (stack.top() == '{' && s[i] == '}'))
        {
          stack.pop();
        }
        else
        {
          return false;
        }
      }
    }

    return stack.empty();
  }
};

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