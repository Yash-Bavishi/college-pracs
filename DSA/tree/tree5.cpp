#include<iostream> 

using namespace std;

struct Node {
  Node *left;
  int a;
  Node *right;
};

Node *GOD = NULL;


Node *insert(Node *root, int value) {
  if (root == NULL) {
    Node *new_node = new Node();
    new_node->a = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
  } else if (value < root->a) {
      root->left = insert(root->left, value);
  } else if (value >= root-> a) {
    root->right = insert(root->right, value);
  }
}

int main() {
  GOD = new Node();
  GOD->left = NULL;
  GOD->a = 40;
  GOD->right = NULL;
  Node *kid = GOD;
  insert(GOD, 50);
  insert(GOD, 30);
  insert(GOD, 70);
  kid = GOD;
  kid = kid->right;
  cout << kid->a << endl;
  //kid = GOD;
  cout << "DEBUG" << endl;
  kid = kid->right;
  cout << "DEBUG" << endl;
  cout << kid->a << endl;
  cout << "DEBUG" << endl;
  return 0;
}
