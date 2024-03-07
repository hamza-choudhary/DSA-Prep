#include "bits/stdc++.h"

//! https://youtu.be/9D-vP-jcc-Y?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=17644

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

void dfsStack(TreeNode *node)
{
  if (node == nullptr)
  {
    return;
  }

  stack<TreeNode *> stack;
  stack.push(node);

  while (!stack.empty())
  {
    TreeNode *removed = stack.top();
    stack.pop();

    cout << removed->val << ", ";

    //! we have to push values in stack first right then left because that way it will be reversed

    if (removed->right != nullptr)
    {
      stack.push(removed->right);
    }
    if (removed->left != nullptr)
    {
      stack.push(removed->left);
    }
  }
}

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