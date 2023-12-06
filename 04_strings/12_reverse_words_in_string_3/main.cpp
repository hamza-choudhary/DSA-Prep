#include "bits/stdc++.h"

using namespace std;
//! Solution 1
// class Solution
// {
// public:
//   string reverseWords(string s)
//   {

//     // tokenization
//     vector<string> tokens;
//     istringstream iss(s);
//     string token;
//     while (getline(iss, token, ' '))
//     {
//       tokens.push_back(token);
//     }

//     for (auto &word : tokens)
//     { // reference is must else wise values will not be changed at array or use tradiotional loop
//       // reverse the word
//       for (int i = 0; i < word.size() / 2; i++)
//       {
//         // swaping
//         char temp = word[i];
//         word[i] = word[word.size() - i - 1];
//         word[word.size() - i - 1] = temp;
//       }
//     }

//     string result;
//     for (auto word : tokens)
//     {
//       result += word + " ";
//     }

//     return result.substr(0, result.size() - 1);
//   }
// };

//! Solution 2
class Solution
{
public:
  string reverseWords(string s)
  {

    string result;
    // tokenization
    vector<string> tokens;
    istringstream iss(s);
    string token;
    while (getline(iss, token, ' '))
    {
      reverse(token.begin(), token.end());
      result += token + " ";
    }

    return result.substr(0, result.size() - 1);
  }
};

int main()
{

  Solution s = Solution();
  cout << boolalpha << endl;

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<string> word1 = {"ab", "c"};
  // vector<string> arr = {"a","abc","bc","d"};

  cout << s.reverseWords("Let's take LeetCode contest") << endl;

  // cout << stoi("10") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}