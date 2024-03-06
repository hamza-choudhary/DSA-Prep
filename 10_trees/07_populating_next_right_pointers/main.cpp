#include "bits/stdc++.h"

//! https://leetcode.com/problems/populating-next-right-pointers-in-each-node/description/
using namespace std;

//! Approach 1: we can do this very easily by the same bfs search after the while loop we just have to connect the nodes nothing else

// Definition for a Node.
class Node
{
public:
  int val;
  Node *left;
  Node *right;
  Node *next;

  Node() : val(0), left(NULL), right(NULL), next(NULL) {}

  Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

  Node(int _val, Node *_left, Node *_right, Node *_next)
      : val(_val), left(_left), right(_right), next(_next) {}
};

//! https://youtu.be/9D-vP-jcc-Y?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=3529

//! Approach 2:

class Solution
{
public:
  Node *connect(Node *root)
  {
    if (root == nullptr)
    {
      return nullptr;
    }

    Node *leftMost = root;

    while (leftMost->left != nullptr)
    {
      Node *current = leftMost;
      while (current != nullptr)
      {
        current->left->next = current->right;
        if (current->next != nullptr)
        {
          current->right->next = current->next->left;
        }
        current = current->next;
      }
      leftMost = leftMost->left;
    }

    return root;
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