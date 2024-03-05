#include "bits/stdc++.h"

using namespace std;

class BinaryTree
{
private:
  class Node
  {
  public:
    int value;
    Node *left;
    Node *right;

    Node(int value)
    {
      this->value = value;
      this->left = nullptr;
      this->right = nullptr;
    }
  };

  Node *root;

public:
  // insert elements
  void populate()
  {
    int value = -1;
    cout << "Enter the root Node: ";
    cin >> value;
    cout << endl;

    root = new Node(value);

    populate(root);
  }
  void populate(Node *node)
  {
    bool left = 0;
    cout << "Do you want to enter left of: " << node->value << endl;
    cin >> left;
    cout << endl;

    if (left)
    {
      int value = -1;
      cout << "Enter the value of the left of " << node->value << endl;
      cin >> value;
      cout << endl;
      node->left = new Node(value);
      populate(node->left);
    }

    bool right = 0;
    cout << "Do you want to enter right of: " << node->value << endl;
    cin >> right;

    if (right)
    {
      int value = -1;
      cout << "Enter the value of the right of " << node->value << endl;
      cin >> value;
      cout << endl;
      node->right = new Node(value);
      populate(node->right);
    }
  }

  //! PRE order
  void preOrder()
  {
    preOrder(root);
  }
  void preOrder(Node *node)
  {
    if (node == nullptr)
    {
      return;
    }
    cout << node->value << " ";
    preOrder(node->left);
    preOrder(node->right);
  }
  //! In order
  void inOrder()
  {
    inOrder(root);
  }
  void inOrder(Node *node)
  {
    if (node == nullptr)
    {
      return;
    }
    inOrder(node->left);
    cout << node->value << " ";
    inOrder(node->right);
  }
  //! Post order
  void postOrder()
  {
    postOrder(root);
  }
  void postOrder(Node *node)
  {
    if (node == nullptr)
    {
      return;
    }
    postOrder(node->left);
    postOrder(node->right);
    cout << node->value << " ";
  }

  void display()
  {
    display(root, "");
  }

  void display(Node *node, string indent)
  {
    if (node == nullptr)
    {
      return;
    }
    cout << indent << node->value << endl;
    display(node->left, indent + "\t");
    display(node->right, indent + "\t");
  }
  void prettyDisplay()
  {
    prettyDisplay(root, 0);
  }

  void prettyDisplay(Node *node, int level)
  {
    if (node == nullptr)
    {
      return;
    }
    prettyDisplay(node->right, level + 1);

    if (level != 0)
    {
      for (int i = 0; i < level - 1; i++)
      {
        cout << "|\t\t";
      }
      cout << "|----->" << node->value << endl;
    }
    else
    {
      cout << node->value << endl;
    }

    prettyDisplay(node->left, level + 1);
  }
};

int main()
{

  BinaryTree tree = BinaryTree();
  cout << boolalpha << endl;

  tree.populate();
  tree.prettyDisplay();

  // vector<int> arr{4, 5, 6, 7, 0, 2, 1, 3};
  // vector<string> word1 = {"ab", "c"};
  // vector<string> word2 = {"a", "bc"};

  // cout << s.toLowerCase("Hello") << endl;

  // vector<int> vec = s.twoSum(arr, 9);
  // for (auto &val : vec)
  // {
  //   cout << val << " ";
  // }

  return 0;
}