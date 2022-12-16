#include<iostream>

using namespace std;

struct Node {
  char pname;
  int a;
  Node *next;
};

Node *start = NULL;
Node *last = NULL;
Node *execution = NULL;
Node *waiting = NULL;

void insertBeginning(int element, char name) {
  Node *new_node = new Node();
  new_node->a = element;
  new_node->pname = name;
  new_node->next = start;
  if (last == NULL) {
    last = new_node;
    start = new_node;
  } else {
    start = new_node;
  }
}

void display() {
  Node *ptr = start;
  while (ptr != NULL) {
    cout << ptr->pname << ":" << ptr->a << endl;
    ptr = ptr->next;
  }
}

void insertEnd(int element, char name) {
  Node *new_node = new Node();
  new_node->a = element;
  new_node->pname = name;
  new_node->next = NULL;
  last->next = new_node;
  last = new_node;
}

void insBetween(Node *before_addr, Node *addr, int element, char name) {
  Node *new_node = new Node();
  new_node->a = element;
  new_node->pname = name;
  new_node->next = addr;
  before_addr->next = new_node;
}

void compare(int element, char name) {
  Node *ptr = start;
  Node *preptr = ptr;
  while (ptr != NULL) {
    if (element < ptr->a) {
      insBetween(preptr, ptr, element, name);
      return;
    } else if (ptr->next == NULL) {
        break;
    }
      else {
        preptr = ptr;
        ptr = ptr->next;
    }
  }
  if (ptr == last) {
    insertEnd(element, name);
  } else {
    cout << ptr->a << endl;
  }
}

void search(int element) {
  int temp = 0;
  Node *ptr = start;
  while (ptr != NULL) {
    if (ptr->a == element) {
      cout << "Value is " << ptr->a << endl;
      cout << "Next address is " << ptr->next << endl;
      temp = 1;
      break;
    } else {
      ptr = ptr->next;
    }
  }
  if (temp == 0) {
    cout << "No data element found" << endl;
  }
}

void executeProcess() {
  Node *ptr = start;
  start = start->next;
  free(ptr);
}

int main() {
  int element;
  int choice;
  char pname;
  while (true) {
    cout << "Enter a choice 1 to insert, 2 to display and 3 to search" << endl;
    cin >> choice;
    if (choice == 1) {
      cout << "Enter a priority " ;
      cin >> element;
      cout << "Enter process name ";
      cin >> pname;
      if (start == NULL) {
        insertBeginning(element, pname);
      } else if (element < start->a) {
        cout << "Else if called" << endl;
        insertBeginning(element, pname);
      } else if (element > start->a) {
        compare(element, pname);
      }
    }
    else if (choice == 2) {
      if (start == NULL) {
        cout << "No lists found" << endl;
      } else {
          display();
      }
    }
    else if (choice == 3) {
      if (start == NULL) {
        cout << "No lists found" << endl;
      } else {
        cout << "Enter a search element" << endl;
        cin >> element;
        search(element);
      }
    }
  else if (choice == 4) {
      if (start == NULL) {
        cout << "There are no process to execute";
      } else {
        cout << "Process " << start->a << " will be executed" << endl;
        executeProcess();
      }
    }
  else if (choice == 5) {
      if (start == NULL) {
        cout << "There are no process to show";
      } else {
        Node *ptr = start;
        while(ptr != NULL) {
          if (ptr == start) {
            cout << "The next process to be executed is " << ptr->a << endl;
          } else {
            cout << ptr->a << endl; 
          }
          ptr = ptr->next;
        }
      }
    }
  } 
  return 0;
}


