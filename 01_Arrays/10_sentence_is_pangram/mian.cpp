#include "bits/stdc++.h"

using namespace std;

class Solution {
public:
  bool checkIfPangram(string sentence) {
    vector<int> counter (26);

    for (auto s : sentence)
    {
      counter[s-97]++;
    }

    for(int i=0;i<counter.size();i++)
    {
      if (counter[i] == 0)
        return false;
    }

    return true;
  }
};

int main()
{
  Solution s = Solution();
  cout << boolalpha;
  cout << s.checkIfPangram("thequickbrownfoxjumpsoverthelazydog");

  return 0;
}