#include "bits/stdc++.h"
// https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/

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

//! https://youtu.be/9D-vP-jcc-Y?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=3252

class Solution
{
public:
  vector<vector<int>> levelOrderBottom(TreeNode *root)
  {

    vector<vector<int>> results;

    if (root == nullptr)
      return results;

    queue<TreeNode *> queue;
    queue.push(root);

    while (!queue.empty())
    {
      int levelSize = queue.size();
      vector<int> currentLevel;
      for (int i = 0; i < levelSize; i++)
      {
        TreeNode *currentNode = queue.front();
        queue.pop();

        currentLevel.push_back(currentNode->val);

        if (currentNode->left != nullptr)
        {
          queue.push(currentNode->left);
        }
        if (currentNode->right != nullptr)
        {
          queue.push(currentNode->right);
        }
      }
      results.insert(results.begin(), currentLevel);
    }

    return results;
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