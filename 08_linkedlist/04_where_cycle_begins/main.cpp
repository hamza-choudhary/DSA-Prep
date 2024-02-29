#include "bits/stdc++.h"

using namespace std;

// https://leetcode.com/problems/linked-list-cycle-ii/

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode()
  {
    this->next = nullptr;
    this->val = 0;
  }
  // ListNode(int x) {
  //   this->next = nullptr;
  //   this->val = x;
  // }
  // ListNode(int x, ListNode *next) {
  //   this->next = next;
  //   this->val = x;
  // }
};

class Solution
{
public:
  ListNode *detectCycle(ListNode *head)
  {

    //! 1. calculate length of cycle
    //! 2. move forward s pointer by length times
    //! 3. move both s and f by 1 step ahead until they meet
    //! 4. they will meet exactly where the cycle has start because s was ahead full cycle length

    ListNode *fast = head; // fast pointer
    ListNode *slow = head; // slow pointer

    int length = 0;

    while (fast != nullptr || fast->next != nullptr)
    {
      fast = fast->next->next;
      slow = slow->next;

      if (fast == slow) // it means there is cycle
      {
        // now we have to move slow again until it hit again fast
        ListNode *temp = slow;
        do
        {
          temp = temp->next;
          length++;
        } while (temp != fast);

        break;
      }
    }

    if (length == 0)
      return nullptr;

    //? find the start node
    ListNode *f = head;
    ListNode *s = head;

    while (length > 0)
    {
      s = s->next;
      length--;
    }

    // keep moving both (f and s) forward and they will meet at cycle start
    while (f != s)
    {
      f = f->next;
      s = s->next;
    }

    return s; // you can also return f as they both are same
  }
};