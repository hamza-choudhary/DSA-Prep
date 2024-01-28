#include "bits/stdc++.h"

using namespace std;

void nto1(int n) {
  if (n == 0) {
    return;
  }

  cout << n << endl;
  nto1(n-1);
}

int main()
{

  nto1(5);

  //vector<int> arr{1, 2, 3, 4, 5, 6};
  //cout << func_name(arr) << endl;

  //for(auto val: arr)
  //{
  //cout << val << " "
  //}
  

  return 0;
}