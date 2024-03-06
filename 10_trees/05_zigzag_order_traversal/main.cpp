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
  vector<vector<int>> zigzagLevelOrder(TreeNode *root)
  {

    vector<vector<int>> results;
    if (root == nullptr)
      return results;

    deque<TreeNode *> deque;
    deque.push_back(root);

    bool reverse = false;

    while (!deque.empty())
    {
      int levelSize = deque.size();
      vector<int> currentLevel;

      for (int i = 0; i < levelSize; i++)
      {
        if (!reverse)
        {
          TreeNode *currentNode = deque.front();
          deque.pop_front();

          currentLevel.push_back(currentNode->val);

          if (currentNode->left != nullptr)
          {
            deque.push_back(currentNode->left);
          }
          if (currentNode->right != nullptr)
          {
            deque.push_back(currentNode->right);
          }
        }
        else
        {
          TreeNode *currentNode = deque.back();
          deque.pop_back();

          currentLevel.push_back(currentNode->val);

          if (currentNode->right != nullptr)
          {
            deque.push_front(currentNode->right);
          }
          if (currentNode->left != nullptr)
          {
            deque.push_front(currentNode->left);
          }
        }
      }
      reverse = !reverse;
      results.push_back(currentLevel);
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