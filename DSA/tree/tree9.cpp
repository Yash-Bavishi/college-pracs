#include<iostream>

using namespace std;

/* Struct of tree */

struct Node {
  Node *left;
  int a;
  Node *right;
};

Node *creator(int value) {
  Node *create = new Node();
  create->left = NULL;
  create->a = value;
  create->right = NULL;
  return create;
}


/* Insert in binary tree */

Node *insert(Node *root, int value) {
  if (root == NULL) {
    root = creator(value);
    return root;
  } else if (value < root->a) {
    cout << "the value are " << root->a << endl;
    root->left = insert(root->left, value);
    return root;
  } else if (value >= root->a) {
    cout << "the value are " << root->a << endl;
    root->right = insert(root->right, value);
    return root;
  }
}

/* In order traversal */

void inOrder(Node *root) {
  if (root->left != NULL) {
    inOrder(root->left);
  } 

  cout << root->a << endl;

  if (root->right != NULL) {
    inOrder(root->right);
  }

}

/* Pre order traversal */

void preOrder(Node *root) {
  cout << root->a << endl;
  if (root->left != NULL) {
    preOrder(root->left);
  }

  if (root->right != NULL) {
    preOrder(root->right);
  }
}

/* Post order traversal */

void postOrder(Node *root) {
  if (root->left != NULL) {
    preOrder(root->left);
  }

  if (root->right != NULL) {
    preOrder(root->right);
  }

  cout << root->a << endl;
}

/* Search product id */

int searchEle(Node *root, int search) {
  if (root->a == search) {
    return search;
  } else if (search < root->a) {
    searchEle(root->left, search);
  } else if (search >= root->a) {
    searchEle(root->right, search);
  }
}

/* Delete a Node */ 

Node *deleteNode(Node *root, int element) {
  if (root->a == element) {
    if (root->left == NULL && root->right == NULL) {
      cout << "Terminal node found, The value is " << root->a << endl;
      free(root);
      return NULL;
    } else if (root->left == NULL) {
        Node *temp = root->right;
        free(root);
        return temp;
    } else if (root->right == NULL) {
        Node *temp = root->left;
        free(root);
        return temp;
    } else if (root->right != NULL && root->left != NULL) {
        Node *ptr = root;
        Node *preptr = ptr;
        ptr = ptr->left;
        cout << "Value of preprtr is " << preptr->a << endl;
        cout << "Value of ptr is " << ptr->a << endl;
        while (ptr->right != NULL) {
          preptr = ptr;
          ptr = ptr->right;
      } 
        cout << "Value of preprtr is " << preptr->a << endl;
        cout << "Value of ptr is " << ptr->a << endl;
        preptr->right = NULL;
        root->a = ptr->a;
        free(ptr);
        return root; 
    }
  } else if (element < root->a) {
    root->left = deleteNode(root->left, element);
    return root;
  } else if (element >= root->a) {
    root->right = deleteNode(root->right, element);
    return root;
  }
}

int main() {
  Node *GOD = NULL;
  int value;
  while(true){
    cout << "Enter a choice" << endl;
    cin >> value;
    if (value == 1) {
      cout << "Enter a value" << endl;
      int val;
      cin >> val;
      GOD = insert(GOD, val);
      cout << GOD << endl;
    }  else if (value == 2) {
      inOrder(GOD);
    } else if (value == 3) {
      cout << "Element to search " << endl;
      int search;
      cin >> search;
      cout << searchEle(GOD, search) << endl;
    } else if (value == 4) {
      cout << "Element to Delete " << endl;
      int element;
      cin >> element;
      deleteNode(GOD, element);
      inOrder(GOD);
    }
  }
  return 0;
}
