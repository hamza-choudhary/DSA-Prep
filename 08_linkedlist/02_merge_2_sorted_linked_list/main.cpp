#include "bits/stdc++.h"

using namespace std;

// https://leetcode.com/problems/merge-two-sorted-lists/

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
  ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
  {
    ListNode *ans = new ListNode(); // create a dummy node
    ListNode *temp = ans;

    while (list1 != nullptr && list2 != nullptr)
    {
      if (list1->val < list2->val)
      {
        temp->next = list1;
        list1 = list1->next;
      }
      else
      {
        temp->next = list2;
        list2 = list2->next;
      }
      temp = temp->next;
    }

    // Append the remaining nodes of list1 or list2
    temp->next = list1 != nullptr ? list1 : list2;

    // Save the head of the merged list
    ans = ans->next;

    // Delete the dummy node
    // delete temp;

    return ans;
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