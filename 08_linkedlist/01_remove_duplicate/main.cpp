#include "bits/stdc++.h"

using namespace std;

// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

class ListNode
{
public:
  int val;
  ListNode *next;
  // ListNode() {
  //   this->next = nullptr;
  //   this->val = 0;
  // }
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
  ListNode *deleteDuplicates(ListNode *head)
  {
    ListNode *node = head;
    
    if (node == nullptr) return head;

    while (node->next != nullptr)
    {
      if (node->val == node->next->val)
      {
        node->next = node->next->next;
      } else {
        node = node->next;
      }
    }
    return head;
  }
};

int main()
{
  // vector<int> arr{1, 2, 3, 4, 5, 6};
  // cout << func_name(arr) << endl;

  // for(auto val: arr)
  //{
  // cout << val << " "
  // }

  return 0;
}