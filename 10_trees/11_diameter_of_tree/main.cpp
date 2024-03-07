#include "bits/stdc++.h"

//! https://leetcode.com/problems/diameter-of-binary-tree/

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

//! https://youtu.be/9D-vP-jcc-Y?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=7472
class Solution
{
public:
  int diameter = INT_MIN;
  int diameterOfBinaryTree(TreeNode *root)
  {
    height(root);
    return diameter - 1; // because of we dont want to return no of nodes in diameter we want just edges so -1
  }
  int height(TreeNode *node)
  {
    if (node == nullptr)
    {
      return 0;
    }
    //! this is post order traversal and also it is depth first search
    int leftHeight = height(node->left);
    int rightHeight = height(node->right);

    //?calculating diameter -> at any node diameter = height of left + height of right of the tree
    int dia = leftHeight + rightHeight + 1;
    //?update global
    diameter = max(dia, diameter);

    return max(leftHeight, rightHeight) + 1;
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