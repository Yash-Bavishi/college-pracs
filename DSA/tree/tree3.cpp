#include<iostream>

using namespace std;

struct Node {
  Node *left;
  int a;
  Node *right;
};

Node *GOD = NULL; 

Node *creator (int value) {
  Node *create = new Node();
  create->a = value;
  create->left = NULL;
  create->right = NULL;
  return create;
}

Node *creator_of_god(int value) {
  if (GOD != NULL) {
    cout << "There can be only 1 god " << endl;
    return NULL;
  } else {
    return creator(value);
  }
}

Node* insert(Node *root, int value) {
  if (root == NULL) {
    Node *create = creator(value);
    return create;
  } else if (value < root->a) {
    cout << "Love is real hate is fake";
    root->left = insert(root->left, value);
  } else if (value >= root->a) {
    cout << "What is hate ?";
    root->right = insert(root->right, value);
  }
}

void display() {
  Node *ptr = GOD;
  while (ptr != NULL) {
    cout << "Something called me" << endl;
    cout << ptr->a << endl;
    ptr = ptr->left;
  }
}

Node *pre(Node *root) {
  if (root->left == NULL) {
   ; 
  } else {
    pre(root->left);
  }
  cout << root->a << endl;
  if (root->right == NULL) {
    ;
  } else {
    pre(root->right);
  }
}

int main() {
  cout << "NEMCDS HAS BEEN INITAILZIED" << endl;
  int element_of_god;
  cout << "Create a God element" << endl;
  cin >> element_of_god;
  GOD = creator_of_god(element_of_god);
  Node *kid = GOD;
  cout << kid->a << endl;
  int value;
  
  for (int i = 0; i < 5; i++) {
    cout << "Please enter a value";
    cin >> value;
    kid = insert(kid, value);
  }
   
  display();
  //pre(GOD);
  return 0;
}
