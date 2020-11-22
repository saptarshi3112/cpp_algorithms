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

  TreeNode *getRight() {
    return this->right;
  }

  TreeNode *getLeft() {
    return this->left;
  }

  friend class BinarySearchTree;
};

class BinarySearchTree {
  TreeNode *root;

  void inorderPrivate(TreeNode *root) {
    if (root) {
      inorderPrivate(root->left);
      cout << root->val << endl;
      inorderPrivate(root->right);
    }
  }

  void preorderPrivate(TreeNode *root) {
    if (root) {
      cout << root->val << endl;
      preorderPrivate(root->left);
      preorderPrivate(root->right);
    }
  }

  void postorderPrivate(TreeNode *root) {
    if (root) {
      postorderPrivate(root->left);
      postorderPrivate(root->right);
      cout << root->val << endl;
    }
  }

  TreeNode *insertPrivate(TreeNode *root, int val) {
    if (root == NULL) {
      return new TreeNode(val);
    }

    // left
    if (root->val > val) {
      root->left = this->insertPrivate(root->left, val);
    } else {
      // right
      root->right = this->insertPrivate(root->right, val);
    }

    return root;

  }

public:
  BinarySearchTree() {
    this->root = NULL;
  }

  TreeNode *getRoot() {
    return this->root;
  }

  void insert(int val) {
    this->root = this->insertPrivate(this->root, val);
  }

  void inorder() {
    this->inorderPrivate(this->root);
  }

  void postorder() {
    this->postorderPrivate(this->root);
  }

  void preorder() {
    this->preorderPrivate(this->root);
  }
};
