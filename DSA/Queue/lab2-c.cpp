#include <iostream>

int front = -1;
    int rear = -1;
    int len = 3;

using namespace std;


       
struct Node {
int n;    
   
   
   
};

void insertWaitingQueue(struct Node waiting[],int n) {
        if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
        } else if ((rear == len-1 && front == 0) )
            cout << "Queue is full";
            else if (rear == front-1 )
            cout << "Queue is full";
           
           
         else if (rear == len-1 && front > 0) {
            rear = 0;
        }
       
        else {
            cout << rear << endl;
            rear = rear + 1;
            cout << rear << endl;
            cout << front << endl;
        }
        //cout << rear <<endl;
        waiting[rear].n = n;
    }

void del(struct Node waiting[],struct Node confirm[], int choice) {
        if ((rear == -1 && front == -1)) {
            cout << "Queue is empty" << endl;
            return;
        }
        confirm[choice] = waiting[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            if (front == len-1) {
                front = 0;
            } else {
                front = front + 1;
            }
        }
    }


int main()
{
    struct Node confirm[4], waiting[3];
     while (true) {
        int user_input;
        cout << "1. Enter confirm ticket " << endl;
        cout << "2. Enter waiting ticket" << endl;
        cout << "3. Display confirmed tickets " << endl;
        //cout << "4. Display waiting tickets " << endl;
        cout << "4. Enter the choice to delete" << endl;
        cout << "5. Exit " << endl;
        cout << "Enter the opeartion number : ";
        cin >> user_input;
        if (user_input == 1) {
            for ( int i = 0; i < 4; i++ ){
                int take_value;
                cout << "Please enter confirm the line";
                cin >> confirm[i].n;
            }
            cout << "-------------------------------" << endl;        
        } else if (user_input == 2) {
            for (int i = 0; i < 3; i++) {
                int input;
                cout << "Enter waiting number " << endl;
                cin >> input;
                //cout << i << endl;
                insertWaitingQueue(waiting, input);
            }
           
            cout << "-------------------------------" << endl;
        } else if (user_input == 3) {
            for (int i = 0; i < 4; i++) {
                cout << confirm[i].n << endl;
            }
            cout << "-------------------------------" << endl;
        } else if (user_input == 4) {
            for (int i = 0; i < 4; i++) {
                cout << i+1 << " . " << confirm[i].n << endl;
            }
            cout << "From the abov number type the number you wish to delete" << endl;
            int del_num;
            cin >> del_num;
            del(waiting, confirm, del_num-1);
        } else if (user_input == 5) {
            break;
        } else {
            cout << "invalid number input" << endl;
        }
    }
   
    cout << "Thank you very much program has been terminated : --------- .";
   
    /*
    confirm[0].n = 10;
    confirm[1].n = 20;
    confirm[2].n = 30;
    confirm[3].n = 40;
    cout << "Displaying the confirmed tickets" << endl;
    for (int i = 0; i < 4; i++) {
        cout << confirm[i].n << endl;
    }
   
    cout << "-------------------------------" << endl;
   
    for (int i = 0; i < 3; i++) {
        int input;
        cout << "Enter waiting number " << endl;
        cin >> input;
        //cout << i << endl;
        waiting[i].insertWaitingQueue(waiting, input);
    }
   
    cout << "-------------------------------" << endl;
   
    for (int i = 0; i < 3; i++) {
        cout << waiting[i].n << endl;
    }
   
    cout << "-------------------------------" << endl;
   
    del(waiting, confirm, 0);
    del(waiting, confirm, 1);
    del(waiting, confirm, 2);
    del(waiting, confirm, 3);
    for (int i = 0; i < 4; i++) {
        cout << confirm[i].n << endl;
    }
   
    waiting[0].insertWaitingQueue(waiting, 100);
    del(waiting, confirm, 3);
    for (int i = 0; i < 4; i++) {
        cout << confirm[i].n << endl;
    }
    */
    return 0;
}
