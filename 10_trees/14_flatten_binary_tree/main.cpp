#include "bits/stdc++.h"

//! https://leetcode.com/problems/flatten-binary-tree-to-linked-list/description/

using namespace std;

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//! https://youtu.be/9D-vP-jcc-Y?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=9206

class Solution
{
public:
  void flatten(TreeNode *root)
  {
    if (root == nullptr)
    {
      return;
    }

    TreeNode *current = root;

    while (current != nullptr)
    {
      if (current->left != nullptr)
      {
        // we have to find right most empty space to put our current.right

        TreeNode *temp = current->left;

        while (temp->right != nullptr)
        {
          temp = temp->right;
        }
        //? now put actual value of current.right
        temp->right = current->right;

        //? change current right to left
        current->right = current->left;

        //? null all the lefts
        current->left = nullptr;
      }
      // move to next node
      current = current->right;
    }
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