#include "bits/stdc++.h"

using namespace std;

int find_unique(vector<int> arr) {

  //? a ^ 1 = ~a
  //? a ^ 0 = a
  //? a ^ a = 0

  //? xor all elements so all duplicate number becomes 0 -> rule 3
  int result = 0; // by rule 1
  for (int i=0; i<arr.size(); i++) {
    result = result ^ arr[i];
  }

  return result;
}

int main()
{
  cout << boolalpha;

  //!every number is shown twice expect 1 number -> find that no
  cout << find_unique({1,2,1,3,3,4,4,5,5}) << endl;

  return 0;
} 