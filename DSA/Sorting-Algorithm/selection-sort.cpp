#include<iostream>

using namespace std;

int main(){
  
  int arr[5] = {5,1,7,9,2};
  int smallest = arr[0];
  int index = 0; 
  int temp = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (arr[j] < smallest) {
        smallest = arr[j];
        index = j;
      }
    }

    temp = arr[i];
    arr[i] = arr[index];
    arr[index] = temp;

  }

  for (int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
  }
  return 0;
}
