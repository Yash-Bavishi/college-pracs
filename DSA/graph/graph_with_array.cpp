#include<iostream>

using namespace std;

int main() {


  /* Lets create the matrix */

  int graph[6][6];
  char alpha[6] = {'A','B', 'C', 'D', 'E','F'};
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      cout << alpha[i] << " -> " << alpha[j] << endl;
      cin >> graph[i][j];
    }
  }

  for (int i = 0; i < 6; i++) {
    cout << alpha[0];
    for (int j =0; j < 6; j++) {
      cout << graph[i][j];
    }
    cout << endl;
  }


  return 0;
}
