#include <iostream>

using namespace std;

struct Node {
  Node *left;
  int a;
  Node *right;
};

Node *GOD = NULL;

Node *insert(Node *root, int value) {
  if (root == NULL) {
    Node* create = new Node();
    create->a = value;
    create->left = NULL;
    create->right = NULL;
    return create;
  } else if (value < root->a) {
    root->left = insert(root->left, value);
    cout << "This is previous " << root->a << endl;
    cout << "This is value " << value << endl;
    return root;
  } else if (value >= root->a) {
    root->right = insert(root->right, value);
    cout << "This is previous " << root->a << endl;
    cout << "This is value " << value << endl;
    return root;
  }
}

void display(Node *root) {
    cout << root->a << endl;
  if(root->left == NULL) {
    cout << "Did someone called me ?" << endl;
    cout << root->a << endl;
    return;
  } else {
    display(root->left);
  }

  if (root->right == NULL) {
    cout << "I am merely a child" << endl;
    cout << root->a << endl;
    return;
  } else {
    display(root->right);
  }

}

int main() {
  GOD = new Node();
  cout << "God has been created" << endl;
  GOD->a = 40;
  GOD->left = NULL;
  GOD->right = NULL;
  insert(GOD, 20);
  insert(GOD, 30);
  //cout << GOD->a << endl;
  //GOD = GOD->left;
  //GOD = GOD->right;
  //cout << GOD->a << endl;
  display(GOD);
  return 0;
}

