#include "bits/stdc++.h"

using namespace std;

//! important concept we are getting result from argument

int helper(int n, int count) {
  if (n == 0) {
    return count;
  }

  if (n%10 == 0) {
    return helper(n/10, ++count);
  }

  return helper(n/10, count);
}

int count_0s(int n) {
  return helper(n, 0);
}

int main()
{

  cout <<  count_0s(3080400) << endl;

  // cout << (int) log10(4933) + 1 << endl;


  //vector<int> arr{1, 2, 3, 4, 5, 6};
  //cout << func_name(arr) << endl;

  //for(auto val: arr)
  //{
  //cout << val << " "
  //}
  

  return 0;
}