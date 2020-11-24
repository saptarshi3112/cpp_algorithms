#include "binary_tree.h"

void iterative_inorder(BinarySearchTree *bst) {
  stack <TreeNode *>st;

  TreeNode *root = bst->getRoot();

  while (!st.empty() || root != NULL) {
    if (root != NULL) {
      st.push(root);
      root = root->left;
    } else {
      root = st.top();
      st.pop();
      cout << root->val << endl;
      root = root->right;
    }
  }

}

void iterative_preorder(BinarySearchTree *bst) {

}

void iterative_postorder(BinarySearchTree *bst) {
  
}

int main() {

  BinarySearchTree bst;

  bst.insert(19);
  bst.insert(10);
  bst.insert(21);

  bst.inorder();

  return 0;
}

