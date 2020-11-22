#include <bits/stdc++.h>
using namespace std;

class TreeNode {
  int val;
  TreeNode *left, *right;

public:
  TreeNode(int val) {
    this->val = val;
    this->left = this->right = NULL;
  }
};

class BinarySearchTree {
  TreeNode *root;
public:
  BinarySearchTree() {
    this->root = NULL;
  }

  public void inorder() {
    this->inorderPrivate();
  }
};
