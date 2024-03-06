#include "bits/stdc++.h"

//! https://leetcode.com/problems/symmetric-tree/

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

//! https://youtu.be/9D-vP-jcc-Y?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=6119

class Solution
{
public:
  bool isSymmetric(TreeNode *root)
  {
    queue<TreeNode *> queue;

    queue.push(root->left);
    queue.push(root->right);

    while (!queue.empty())
    {
      TreeNode *left = queue.front();
      queue.pop();
      TreeNode *right = queue.front();
      queue.pop();

      if (left == nullptr && right == nullptr)
      {
        continue;
      }

      if (left == nullptr || right == nullptr)
      {
        return false;
      }

      if (left->val != right->val)
      {
        return false;
      }

      queue.push(left->left);
      queue.push(right->right);
      queue.push(left->right);
      queue.push(right->left);
    }

    return true;
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