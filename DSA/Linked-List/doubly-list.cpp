#include <iostream>

using namespace std;

struct Node {
	Node *pre;
	int a;
	Node *p;
};

Node *start = NULL;
Node *previous = NULL;
Node *last = NULL;


void initialize(int value){
  if (start == NULL) {
    Node *new_node = new Node();
    new_node->pre = NULL;
    new_node->p = NULL;
    new_node->a = value;
    start = new_node;
  } else {
    cout << "Already initiazlied";
  }
}

void insStart(int value) {
  if (start == NULL) {
    initialize(value);
  } else {
      Node *new_node = new Node();
      previous = start;
      new_node->pre = previous;
      new_node->a = value;
      new_node->p = start;
      start = new_node;
  }
}

void insEnd(int value){
  if (start == NULL) {
    cout << "function called";
    initialize(value);
  } else {
    Node *ptr = start;
    while (ptr->p == NULL) {
      ptr = ptr->p;
    } 
    cout << ptr->a << endl;
    Node *new_node = new Node();
    ptr->p = new_node;
    new_node->pre = ptr;
    new_node->a = value;
    new_node->p = last;
    last = new_node;
  }
}

void display() {
	Node *ptr = start;
	while (ptr != NULL) {
		cout << ptr->a << endl;
		cout << ptr->pre << endl;
		ptr = ptr->p;
	}
}

void displayFromEnd() {
    Node *ptr = last;
    cout << ptr->a << endl;
    Node *temp = NULL;
    temp = ptr->pre;
    cout << temp->a;
    while (ptr->pre == NULL) {
      cout << ptr->a << endl;
      cout << "Watch this" << ptr->pre << endl;
      ptr = ptr->pre;
    }
}

int main() {
	int value;
	for (int i = 0; i < 5; i++) {
		cin >> value;
		insStart(value);
  }
    cout << "enter a value again for end" << endl;
		cin >> value;
    insEnd(value);
    display();
    //displayFromEnd();
    //displayFomEnd();
    cout << last->a;
	return 0;

}
