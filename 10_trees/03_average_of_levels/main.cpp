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

//! https://leetcode.com/problems/average-of-levels-in-binary-tree/

struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//! https://youtu.be/9D-vP-jcc-Y?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=1898
class Solution
{
public:
  vector<double> averageOfLevels(TreeNode *root)

  {
    vector<double> results;

    if (root == nullptr)
      return results;

    queue<TreeNode *> queue;
    queue.push(root);

    while (!queue.empty())
    {
      int levelSize = queue.size();
      double averageAtLevel = 0;
      for (int i = 0; i < levelSize; i++)
      {
        TreeNode *currentNode = queue.front();
        queue.pop();

        averageAtLevel += currentNode->val;

        if (currentNode->left != nullptr)
        {
          queue.push(currentNode->left);
        }
        if (currentNode->right != nullptr)
        {
          queue.push(currentNode->right);
        }
      }
      averageAtLevel = averageAtLevel / levelSize;
      results.push_back(averageAtLevel);
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