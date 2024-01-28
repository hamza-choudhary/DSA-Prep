#include "bits/stdc++.h"

using namespace std;

int factorial(int n) {
  if (n <= 1) {
    return 1;
  }

  return n * factorial(n - 1);
}

int main()
{

 cout <<  factorial(3) << endl;;

  //vector<int> arr{1, 2, 3, 4, 5, 6};
  //cout << func_name(arr) << endl;

  //for(auto val: arr)
  //{
  //cout << val << " "
  //}
  

  return 0;
}