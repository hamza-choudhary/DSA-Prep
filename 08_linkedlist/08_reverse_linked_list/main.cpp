// https://leetcode.com/problems/reverse-linked-list/description/

#include "bits/stdc++.h"

using namespace std;

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
  ListNode *reverseList(ListNode *head)
  {

    if (head == nullptr) {
      return head;
    }

    ListNode *prev = nullptr;
    ListNode *present = head;
    ListNode *next = present->next;

    while (present != nullptr)
    {
      present->next = prev;
      prev = present;
      present = next;

      if (next != nullptr)
      {
        next = next->next;
      }
    }

    return prev;
  }
};