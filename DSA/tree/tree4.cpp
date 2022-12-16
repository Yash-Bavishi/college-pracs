#include<iostream>

using namespace std;


struct Node {
  Node *left;
  int a; 
  Node *right;
};

Node *GOD = NULL;

Node *creator(int value) {
  Node *create = new Node();
  create->left = NULL;
  create->right = NULL;
  create->a = value;
  return create;
}

Node *insert(Node *root, int value) {
  if (root == NULL) {
    cout << "Child has been created " << endl;
    return creator(value);
  } else if (value < root->a) {
    root->left = insert(root->left, value);
    cout << "The child will take the path to left" << endl;
  } else if (value >= root->a) {
    cout << "The child will take the path to right" << endl;
    root->right = insert(root->right, value);
  }
}

void display() {
  Node *ptr = GOD;
  while (ptr != NULL) {
    cout << ptr->a << endl;
    ptr = ptr->right;
  }
}

int main() {
  cout << "Program initialized ---------------  ///----------- " << endl;
  cout << "Starting the procedure to take root " << endl;
  GOD = new Node();
  int value;
  cout << "Enter value to add in root " << endl;
  cin >> value;
  GOD->left = NULL;
  GOD->a = value;
  GOD->right = NULL;
  cout << "God has been created " << endl;
  Node *KID = GOD;
  cout << "Starting the procedure to add humans " << endl; 
   
  insert(GOD, 20);
  insert(GOD, 30);
  insert(GOD, 40);
  insert(GOD, 50);
  insert(GOD, 60);

  cout << "Going to start displaying ----------------- " << endl;
  //display();
  Node *reacher = GOD;
  reacher = reacher->right;
  cout << reacher->a << endl;
  return 0;
}
