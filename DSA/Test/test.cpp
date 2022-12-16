#include<iostream>

using namespace std;

struct Node {
  int a;
  Node *next;
};

Node *START = NULL;

int main() {
  Node *new_node = new Node();
  new_node->a = 10;
  new_node->next = START;
  START = new_node;
  cout << new_node->a << endl;
}
