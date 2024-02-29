#include "bits/stdc++.h"

using namespace std;

// https://youtu.be/S9LUYztYLu4?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=3878

class TwoStacks
{
public:
  int twoStacks(int x, vector<int> a, vector<int> b)
  {
    return twoStacks(x, a, b, 0, 0) - 1;
  }

  int twoStacks(int x, vector<int> a, vector<int> b, int sum, int count)
  {

    if (sum > x)
    {
      return count;
    }

    if (a.size() == 0 || b.size() == 0)
    {
      return count;
    }

    int ans1 = twoStacks(x, vector<int>(a.begin() + 1, a.end()), b, sum + a[0], count + 1);
    int ans2 = twoStacks(x, a, vector<int>(b.begin() + 1, b.end()), sum + b[0], count + 1);

    return max(ans1, ans2);
  }
};
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */