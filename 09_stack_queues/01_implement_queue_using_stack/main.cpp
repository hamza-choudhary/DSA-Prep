#include "bits/stdc++.h"

using namespace std;

class MyQueue
{
public:
  stack<int> stack1;
  stack<int> stack2;
  MyQueue()
  {
  }

  void push(int x)
  {
    stack1.push(x);
  }

  int pop()
  {
    // put all elements in stack2
    while (!stack1.empty())
    {
      int val = stack1.top();
      stack1.pop();
      stack2.push(val);
    }
    int removed = stack2.top();
    stack2.pop();
    // put back all elements in stack1
    while (!stack2.empty())
    {
      int val = stack2.top();
      stack1.push(val);
      stack2.pop();
    }

    return removed;
  }

  int peek()
  {
    // put all elements in stack2
    while (!stack1.empty())
    {
      int val = stack1.top();
      stack1.pop();
      stack2.push(val);
    }
    int peek = stack2.top();
    // put back all elements in stack1
    while (!stack2.empty())
    {
      int val = stack2.top();
      stack1.push(val);
      stack2.pop();
    }

    return peek;
  }

  bool empty()
  {
    return stack1.empty();
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