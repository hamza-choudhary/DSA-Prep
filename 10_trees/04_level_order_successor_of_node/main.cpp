#include "bits/stdc++.h"
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//! https://youtu.be/9D-vP-jcc-Y?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=2363

class Solution
{
public:
  TreeNode *averageOfLevels(TreeNode *root, int key)

  {

    if (root == nullptr)
      return nullptr;

    queue<TreeNode *> queue;
    queue.push(root);

    while (!queue.empty())
    {
      int levelSize = queue.size();

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

      if (currentNode->val == key)
      {
        break;
      }
    }

    return queue.front();
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