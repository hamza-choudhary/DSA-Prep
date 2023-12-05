#include "bits/stdc++.h"

using namespace std;

class Solution
{
public:
  string sortSentence(string s)
  {
    // tokenization
    vector<string> tokens;
    istringstream iss(s);
    string token;

    while (getline(iss, token, ' '))
    {
      tokens.push_back(token);
    }

    vector<string> sorted_tokens(tokens.size(), "x");

    for (int i = 0; i < tokens.size(); i++)
    {
      int idx = tokens[i][tokens[i].size() - 1] - '0';                    // convertion char to int
      sorted_tokens[idx - 1] = tokens[i].substr(0, tokens[i].size() - 1); // removing num from last
    }

    // creating result
    string result = "";
    for (int i = 0; i < sorted_tokens.size(); i++)
    {
      result += sorted_tokens[i] + " ";
    }

    return result.substr(0, result.size() - 1);
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<vector<string>> items = {{"phone", "blue", "pixel"}, {"computer", "silver", "lenovo"}, {"phone", "gold", "iphone"}};

  cout << s.sortSentence("is2 sentence4 This1 a3") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}