#include "bits/stdc++.h"

//! https://leetcode.com/problems/maximum-depth-of-binary-tree/

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

//! https://youtu.be/9D-vP-jcc-Y?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=8700

class Solution
{
public:
  //! Approach 1: Recurrsion
  int maxDepth(TreeNode *root)
  {
    // same as height
    if (root == nullptr)
    {
      return 0;
    }

    int leftHeight = maxDepth(root->left);
    int rightHeight = maxDepth(root->right);

    return max(leftHeight, rightHeight) + 1;
  }
  
  //! Approach 2: Level order Traversal (BFS)
  int maxDepth(TreeNode *root)
  {
    int height = 0;
    queue<TreeNode *> queue;

    if (root == nullptr)
      return height;

    queue.push(root);

    while (!queue.empty())
    {
      //? we are incrementing height at every level
      height++;

      int levelSize = queue.size();

      for (int i = 0; i < levelSize; i++)
      {
        TreeNode *currentNode = queue.front();
        queue.pop();

        if (currentNode->left != nullptr)
        {
          queue.push(currentNode->left);
        }

        if (currentNode->right != nullptr)
        {
          queue.push(currentNode->right);
        }
      }
    }

    return height;
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