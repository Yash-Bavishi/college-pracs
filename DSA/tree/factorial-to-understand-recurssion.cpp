#include<iostream>

using namespace std;

int fact(int n) {
  cout << "HAHAHAHAHAH ------- JOKER" << n << endl;
  if (n == 0) {
    return 1;
  } else {
    return (n * fact(n-1));
  }
}


int main() {
  cout << "hello" << endl;
  cout << fact(5) << endl;
  return 1;
}
