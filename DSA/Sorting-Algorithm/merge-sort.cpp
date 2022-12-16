#include<iostream>

using namespace std;

int mini(int arr[]) {
  cout << arr[0] << endl;
  int arr_size = sizeof(arr);
  int int_size = sizeof(arr[0]);
  cout << arr_size << endl;
  cout << int_size << endl;
  cout << arr_size/int_size << endl;
  int length = sizeof(arr) / sizeof(arr[0]);
  return length;
}

int main() {
  int arr[4] = {3,2,1,4}; 
  int length = mini(arr);
  int size = sizeof(arr)/sizeof(arr[0]);
  cout << size << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i];
  }
  return 0;
}
