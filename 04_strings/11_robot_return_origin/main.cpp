#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  bool judgeCircle(string moves)
  {

    int vertical_move = 0;
    int horizontal_move = 0;

    for (int i = 0; i < moves.size(); i++)
    {
      if (moves[i] == 'U')
      {
        vertical_move++;
      }
      else if (moves[i] == 'D')
      {
        vertical_move--;
      }
      else if (moves[i] == 'R')
      {
        horizontal_move++;
      }
      else if (moves[i] == 'L')
      {
        horizontal_move--;
      }
    }

    return vertical_move == 0 && horizontal_move == 0;
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<string> word1 = {"ab", "c"};
  vector<string> arr = {"a", "abc", "bc", "d"};

  cout << s.judgeCircle("LL") << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}