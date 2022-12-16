#include<iostream>

using namespace std;

struct Node {
  Node *left;
  int a;
  Node *right;
};

Node *GOD = NULL;

Node *creator(int x) {
  Node *create = new Node();
  create->a = x;
  create->left = NULL;
  create->right = NULL;
  return create;
}

Node *insertNode(Node *root, int x) {
  cout << "This is my birth " << root << endl;
  if (root == NULL) {
    cout << "The creator has been summoned " << endl;
    root = creator(x); 
    return root;
  } else if (x >= root->a) {
    cout << "My path is towards the dire" << endl;
    root->right = insertNode(root->right, x);
  } else if (x < root->a) {
    cout << "My path is towards the radiant" << endl;
    root->left = insertNode(root->left, x);
  }
}

void display() {
  Node *ptr = GOD;
  while (ptr != NULL) {
    cout << ptr->a;
    ptr = ptr->left;
  }
}

int main() {
  GOD = new Node();
  GOD->a = 60;
  Node *kid = new Node();
  kid = GOD;
  int value;
  GOD = NULL;
  for (int i = 0; i < 2; i++ ) {
    cout << "Please enter a vlue to enter" << endl;
    cin >> value;
    insertNode(GOD, value);
  }
  cout << GOD->a << endl;
  display();


}
