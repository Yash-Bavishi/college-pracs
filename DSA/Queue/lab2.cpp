
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
/*    */
    return 0;
}

