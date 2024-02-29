#include "bits/stdc++.h"

using namespace std;

//! https://youtu.be/70tx7KcMROc?t=6936 with tail

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
  void reverseList(ListNode *head, ListNode *prev = nullptr)
  {
    if (head == nullptr)
      return;

    head->next = prev;
    prev = head;
    head = head->next;

    reverseList(head, prev);
  }
};