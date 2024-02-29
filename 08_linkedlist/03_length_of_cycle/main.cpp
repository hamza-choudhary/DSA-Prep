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

//! ther is no question on leet-code it is in video
class Solution
{
public:
  int sizeOfCycle(ListNode *head)
  {
    ListNode *fast = head; // fast pointer
    ListNode *slow = head; // slow pointer

    int length = 0;

    while (fast != nullptr || slow != nullptr)
    {
      fast = fast->next->next;
      slow = slow->next;

      if (fast == slow) // it means there is cycle
      {
        // now we have to move slow again until it hit again fast
        do
        {
          slow = slow->next;
          length++;
        } while (slow != fast);

        return length;
      }
    }

    return 0;
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