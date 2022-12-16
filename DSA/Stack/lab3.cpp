#include<iostream>

using namespace std;

int TOP = -1;
int LEN = 5;
void push (char arr[], int value) {
	if (TOP == -1) {
		cout << "Stack is empty" << endl;
		TOP = 0;
	} else if (TOP == LEN) {
		cout << "Stack is full" << endl;
	} else {
		TOP = TOP + 1;
	}
	arr[TOP] = value;
}

void pop() {
	if (TOP == -1) {
		cout << "Stack is empty" << endl;
	} else {
		TOP = TOP - 1;
	}
}

int peep(char arr[]) {
	if (TOP == -1) {
		return 0 ;
	} else {
		return arr[TOP];
	}
}


int main() {
	char arr[5];
	while(true) {
		char choice;
		cout << "Enter character and if you wish to end type ." << endl;
		cin >> choice;
		if (choice == '{') {
			push(arr, choice);
		} else if (choice == '}') {
			pop ();
		} else if (choice == '.') {
			break;
		} else {
			cout << "Invalid character";
		}
}		
		if (TOP == -1) {
			cout << "balanced" << endl;
		} else {
			cout << "Not balanced" << endl; 
		}	
	
	return 0;
}
		


