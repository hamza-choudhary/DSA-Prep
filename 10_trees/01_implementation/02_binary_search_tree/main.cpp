#include "bits/stdc++.h"

using namespace std;

class BST
{
private:
  class Node
  {
  public:
    int value;
    Node *left;
    Node *right;
    int height;

    Node(int val) : value(val), left(nullptr), right(nullptr), height(0) {}
  };

public:
  BST() : root(nullptr) {}

  bool isEmpty()
  {
    return root == nullptr;
  }

  Node *root;

  void insert(int value)
  {
    root = insert(value, root);
  }

  Node *insert(int value, Node *node)
  {
    if (node == nullptr)
    {
      node = new Node(value);
      return node;
    }

    if (value < node->value)
    {
      node->left = insert(value, node->left);
    }

    if (value > node->value)
    {
      node->right = insert(value, node->right);
    }

    node->height = max(height(node->left), height(node->right)) + 1;
    return node;
  }

  void populate(vector<int> nums)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      insert(nums[i]);
    }
  }

  // https://youtu.be/4s1Tcvm00pA?list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&t=8875
  void populatedSorted(vector<int> nums, int start, int end)
  {
    if (start >= end)
    {
      return;
    }

    int mid = (start + end) / 2;

    insert(nums[mid]);
    populatedSorted(nums, start, mid);
    populatedSorted(nums, mid + 1, end);
  }

  void display()
  {
    display(root, "Root Node: ");
  }

  void display(Node *node, string details)
  {
    if (node == nullptr)
    {
      return;
    }
    cout << details << node->value << endl;
    display(node->left, "Left child of " + to_string(node->value) + " : ");
    display(node->right, "Right child of " + to_string(node->value) + " : ");
  }

  int height(Node *node)
  {
    if (node == nullptr)
    {
      return -1;
    }
    return node->height;
  }

  bool balanced()
  {
    return balanced(root);
  }

  bool balanced(Node *node)
  {
    if (node == nullptr)
    {
      return true;
    }
    return abs(height(node->left) - height(node->right)) <= 1 && balanced(node->left) && balanced(node->right);
  }
};

int main()
{
  BST bst;
  vector<int> nums{5, 2, 7, 1, 4, 6, 9, 8, 3, 10};
  bst.populate(nums);
  bst.display();
  // cout << "Is BST balanced? " << boolalpha << bst.balanced() << endl;

  return 0;
}
