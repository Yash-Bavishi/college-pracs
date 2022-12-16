#include <iostream>

using namespace std;

struct Node {
	int a;
	Node *p;
};

Node *start = NULL;

 Node *insert (Node *ins, int value) {
	Node *new_node = new Node();
	cout << "This si 1 " << ins << endl;
	new_node->a = value;
	new_node->p = ins;
	ins = new_node;
	cout << "This " << ins << endl;
	return ins;
}

//#int i = 0;
void insertEnd(Node *ins, int iterator, int n) {

	cout << iterator << endl;
	//cout << i << endl;
	if (iterator == n) {
		cout << "Done";
	} else {
		Node *new_node = new Node();
		ins->p  = new_node;
		cout << "Being executed";
		int value;
		cin >> value;
		new_node->a = value;
		new_node->p = NULL;	
		iterator = iterator + 1;
		insertEnd(new_node, iterator, 5);
	}	
}

void insAt(Node *preptr, Node *ptr, int value) {
	preptr = ptr;
	Node *add_node = new Node();
	add_node->a = 90;
	
	while (preptr->a != value) {
		preptr = ptr;
		ptr = ptr->p;
	}
       	
	preptr->p = add_node;
	add_node->p = ptr;
}	

void InsBef(Node *preptr, Node *ptr, int value) {
	preptr = ptr;
	Node *add_node = new Node();
	add_node->a = 110;
	while (ptr->a != value) {
		preptr = ptr;
		ptr = ptr->p;
	} 
	preptr->p = add_node;
	add_node->p = ptr;
}

void deleteEnd(Node *preptr, Node *ptr, int value) {
	if (ptr->p == NULL) {
		cout << "hello" << endl;
		preptr->p = NULL;
		delete ptr;
	} else {
		cout << "going" << endl;
		preptr = ptr;
		ptr = ptr->p;
		deleteEnd(preptr, ptr, 5);
	}
}	


void deleteBeginning() {
	Node *ptr = start; 
	start = ptr->p;
	free(ptr);
	cout << "This is pointer " << ptr << endl;
}

void delAt(Node *preptr, Node *ptr, int value) {
	preptr = ptr;
	while (ptr->a != value) {
		preptr = ptr;
		ptr = ptr->p;
	} 
	preptr->p = ptr->p;
	
}
	
void exp(Node *preptr, Node *ptr, int value) {
	preptr = ptr;
	Node *prepreptr = preptr;
	while (ptr->a != value) {
		prepreptr = preptr;
		preptr = ptr;
		ptr = ptr->p;
	} 
	prepreptr->p = ptr;

	//preptr->p = ptr->p;
	
}

void display(Node *ptr) {
	while (ptr != NULL){ 
		cout << ptr->a << endl;
		ptr = ptr->p;
	}	
}

int main() {
	Node *first_node = new Node();
	Node *curr  = new Node();
	first_node->a = 10;
	first_node->p = start;
	start = first_node;
	Node *ins = first_node;
	cout << ins << endl;
/*	
	for (int i = 0; i < 5; i++) {
		int value;
		cin >> value;
		ins = insert(ins,value); 
	}
	*/
	insertEnd(ins, 0, 5);
	cout << ins << endl;
	start = ins;
	Node *ptr = start;
	display(ptr);
	ptr = start;
	cout << ptr << endl;
	Node *preptr = ptr;
//	deleteEnd(preptr, ptr, 5);
//	deleteBeginning();
	ptr = start;
	insAt(preptr, ptr, 30);
	InsBef(preptr, ptr, 30);
	delAt(preptr, ptr, 30);
	//exp(preptr, ptr, 30);
	display(ptr);
	return 0;
}
