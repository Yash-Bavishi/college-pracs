#include<iostream>

using namespace std;

struct Node {
  Node *left;
  int a;
  Node *right;
};

Node *creator(int x) {
  Node *create = new Node();
  create->a = x;
  create->left = NULL;
  create->right = NULL;
  return create;
}

Node *GOD = NULL;

Node *insert(Node *root, int x ) {
  if (root == NULL) {
    root = creator(x);
    cout << "The child has been created" << endl;
    return root;
  } else if (x < root->a) {
    root->left = insert(root->left, x);
    cout << "The path of radiant has been chosen" << endl;
  } else if (x >= root->a) {
    root->right = insert(root->right, x);
    cout << "The path of dire has been chosen" << endl;
  }
}

int main() {
  GOD = insert(GOD, 20);
  Node *ptr = GOD;
  cout << ptr->a << endl;
  return 0;
}
