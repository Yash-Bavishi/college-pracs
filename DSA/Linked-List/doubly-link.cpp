#include <iostream>

using namespace std;

struct Node {
  Node *pre;
  int a;
  Node *next;
};

Node *start = NULL;
Node *last = NULL;

void initialize(int value) {
  if (start != NULL ) {
    return;
  } else {
    Node *new_node = new Node();
    new_node->pre = NULL;
    new_node->next = NULL;
    new_node->a = value;
    last = new_node;
    start = new_node;
  }
}

void insertFromBeginning(int value) {
  Node *new_node = new Node();
  start->pre = new_node;
  new_node->next = start;
  new_node->pre = NULL;
  new_node->a = value;
  start = new_node;
}

void insertEnd(int value) {
  Node *new_node = new Node();
  new_node->pre = last;
  last->next = new_node;
  new_node->next = NULL;
  new_node->a = value;
  last = new_node;
}

void insertMid(int element, int value) {
  Node *ptr = start;
  Node *preptr = ptr;
  int temp = 0;
  while (ptr != NULL) {
    if (ptr->a == element) {
        temp = 1;
        break;
    } else {
        preptr = ptr;
        ptr = ptr->next;
    }
  } 
  if (temp == 0) {
    cout << "No elements found" << endl;
    return;
  } else {
      Node *new_node = new Node();
      preptr->next = new_node;
      new_node->pre = preptr;
      new_node->next = ptr;
      ptr->pre = new_node;
      new_node->a = value;
  }
}

void deleteFromBeginning() {
  Node *ptr = start;
  start = start->next;
  free(ptr);
}

void deleteFromEnd() {
  Node *ptr = last;
  cout << last->a << endl;
  cout << ptr->a << endl;
  last = last->pre;
  last->next = NULL;
  free(ptr);
}

void deleteMid(int element) {
  Node *ptr = start;
  Node *preptr = ptr;
  Node *nextptr = preptr;
  int temp = 0;
  while (ptr != NULL) {
    if (ptr->a == element) {
        temp = 1;
        break;
    } else {
        preptr = ptr;
        ptr = ptr->next;
    }
  } 
  if (temp == 0) {
    cout << "No elements found" << endl;
    return;
  } else {
      nextptr = ptr->next;
      preptr->next = ptr->next;
      nextptr->pre = preptr;
      free(ptr);
  }
}

void display() {
  Node *ptr = start;
  while (ptr != NULL) {
    cout << ptr->a << endl;
    ptr = ptr->next;
  }
}

int main() {
  while(true) {
    int choice;
    cout << "1. Insert from beginning " << endl;
    cout << "2. Insert at end " << endl;
    cout << "3. Display" << endl;
    cout << "4. Insert in between" << endl;
    cout << "5. delete from beginning " << endl;
    cout << "6. delete from end " << endl;
    cout << "7. delete in between" << endl;
    cin >> choice;
    if (choice == 1) {
      int value;
      cout << "enter value to insert" << endl;
      cin >> value; 
      if (start == NULL) {
        initialize(value);
      } else {
        insertFromBeginning(value);
      }
    } else if (choice == 2) {
        int value;
        cout << "enter value to insert" << endl;
        cin >> value; 
        if (start == NULL) {
            initialize(value);
        } else {
            insertEnd(value);
        }
    } else if (choice == 3) {
      display();
    } else if (choice == 4) {
      int value;
      int search;
      cout << "enter value to enter befor" << endl;
      cin >> search; 
      cout << "Enter value to insert " << endl;
      cin >> value;
      if (start == NULL) {
        cout << "No elements in list" << endl;
      } else {
        insertMid(search, value);
      }
    } else if (choice == 5) {
      deleteFromBeginning();
    } else if (choice == 6) {
      deleteFromEnd();
    } else if (choice == 7) {
      int deleteElement; 
      cout << "Enter value to delete " << endl;
      cin >> deleteElement; 
      if (last != NULL &&  start != NULL) {
        deleteMid(deleteElement);
      }
    }
  }
}

