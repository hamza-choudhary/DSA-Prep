#include "bits/stdc++.h"

using namespace std;

int sum_of_digits(int n) {
  if (n <= 9) {
    return n;
  }

  return n%10 + sum_of_digits(n/10);
}

int main()
{

  cout <<  sum_of_digits(1111) << endl;;

  //vector<int> arr{1, 2, 3, 4, 5, 6};
  //cout << func_name(arr) << endl;

  //for(auto val: arr)
  //{
  //cout << val << " "
  //}
  

  return 0;
}