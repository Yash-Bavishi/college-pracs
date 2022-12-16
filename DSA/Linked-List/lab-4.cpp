#include <iostream>

using namespace std;

struct Node {
    char pname;
    int pid;
    int priority;
    Node *next;
};

Node *start = NULL;
Node *last = NULL;

void insBegninng(char p_name,int p_id,int prior) {
    Node *new_node =  new Node();
    new_node->pname = p_name;
    new_node->pid = p_id;
    new_node->priority = prior;
    new_node->next = start;
    if (start == NULL) {
      start = new_node;
      last = new_node;
    } else {
      start = new_node;
    }
} 

void insEnd(char p_name, int p_id, int prior) {
  Node *new_node = new Node();
  new_node->pname = p_name;
  new_node->pid = p_id;
  new_node->next = NULL;
  last->next = new_node;
  last = new_node;
}


void display() {
    Node *ptr = start;
    while (ptr != NULL) {
        cout << ptr->pid << endl;
        ptr = ptr->next;
    }
}

int search(int u_pid) {
  Node *ptr = start;
  while (ptr != NULL) {
    if (ptr->pid == u_pid) {
      cout << "Found it ---> captain jack sparrow" << endl;
      return ptr->pid;
    } else {
      ptr = ptr->next;
    }
  }
}
int main() {
    while (true) {
        char choice;
        // Insertion 
        cout << "Please select options from below" << endl;
        cout << "1. Insert at beginning" << endl;
        cout << "2. Insert at ending" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Traverse" << endl;
        cout << "5. Search" << endl;
        cout << "Enter number : ";
        cin >> choice;
        cout << endl ; 
        if (choice == '1'){
            char p_name;
            cout << "Enter process character" << endl;
            cin >> p_name;
            int p_id;
            cout << "Enter process id" << endl;
            cin >> p_id;
            int prior;
            cout << "Enter priority" << endl;
            cin >> prior;
            insBegninng(p_name,p_id,prior); 
    }  else if (choice == '2') {
            char p_name;
            cout << "Enter process character" << endl;
            cin >> p_name;
            int p_id;
            cout << "Enter process id" << endl;
            cin >> p_id;
            int prior;
            cout << "Enter priority" << endl;
            cin >> prior;
            insEnd(p_name,p_id,prior); 
    } else if (choice == '5') {
            int search_item;
            cout << "Please enter a search pid" << endl;
            cin >> search_item;
            cout << search(search_item) << endl;
    }
        else if (choice == '4') {
            display();
    }

}
    return 0;
}
