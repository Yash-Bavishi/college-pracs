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

void display(Node *root) { // Inorder
  if (root->left != NULL) {
    display(root->left);
  }

  cout << root->a << endl;

  if (root->right != NULL) {
    display(root->right);
  }

}

void preOrder(Node *root) {
  cout << root->a << endl;

  if (root->left != NULL) {
    preOrder(root->left);
  }


  if (root->right != NULL) {
    preOrder(root->right);
  }
}

void postOrder(Node *root) {
  if (root->left !=NULL) {
    postOrder(root->left);
  }


  if (root->right != NULL) {
    postOrder(root->right);
  }

  cout << root->a << endl;

}

int main() {
  GOD = new Node();
  cout << "God has been created" << endl;
  GOD->a = 40;
  GOD->left = NULL;
  GOD->right = NULL;
  int value;
  for (int i = 0; i < 5; i++) {
    cout << "Enter value to add " << endl;
    cin >> value;
    insert(GOD, value);
  }
  //insert(GOD, 20);
  //insert(god, 30);
  //cout << GOD->a << endl;
  //GOD = GOD->left;
  //GOD = GOD->right;
  //cout << GOD->a << endl;
  //display(GOD);
  postOrder(GOD);
  //preOrder(GOD);
  return 0;
}

