#include<iostream>

using namespace std;

struct Node {
  int a;
  Node *next;
};

Node *start = NULL;
Node *last = NULL;

void insert(int element) {
  Node *new_node = new Node();
  new_node->a = element;
  new_node->next = start;
  if (last == NULL) {
    last = new_node;
    start = new_node;
  } else {
    start = new_node;
  }
}
/*
void insertEnd(int element) {
  Node *new_node = new Node();
  new_node->a = element;
  new_node->next = NULL;
  last->next = new_node;
  last = new_node;
}
*/

void display() {
  Node *ptr = start;
  while (ptr != NULL) {
    cout << ptr->a << endl;
    ptr = ptr->next;
  }
}

void insertEnd(int element) {
  Node *new_node = new Node();
  new_node->a = element;
  new_node->next = NULL;
  last->next = new_node;
  last = new_node;
}

void compareTillLast(int element) {
  Node *ptr = start;
  Node *preptr = ptr;
  while (element > ptr->a) {
    if (ptr == last) {
      insertEnd(element);
      break;
    } else {
      cout << "Value which is greater than element: " << element << "is: " << ptr->a;
      ptr = ptr->next;
    }
  }
}
/*
void compare(int element) {
  Node *ptr = start;
  Node *preptr = ptr;
  if (element > ptr->a) {
    if (ptr == last) {
      cout << "Last me insert karunga" << endl;
      insertEnd(element);
    } 
  }
  else if (element < ptr->a) {
    if (ptr == start) {
      cout << "Start me insert kar raha " << endl;
      insert(element);
    } else {
        cout << "Improvement hai but me next level hu " << endl;
      }
    }
  }
*/

int main() {
  while (true) {
    int choice;
    cout << "1. To insert" << endl;
    cout << "2. To display" << endl;
    cout << "3. to delete" << endl;
    cout << "4. to traverse" << endl;
    cin >> choice;
    if (choice == 1) {
      int element;
      cout << "Element daal na " << endl;
      cin >> element;
      if (start == NULL) {
        insert(element);
      } else {
        compareTillLast(element);
      }
    } else if (choice == 2) {
      display();
    }
}
  return 0;
}
