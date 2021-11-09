#include <iostream>
using namespace std;

int main() {
  int ages[10];

  for (int i = 0; i < 10; i++) {
    cout << "Age girl " << i + 1 << " = ";
    cin >> ages[i];
  }

  for (int i = 0; i < 10; i++) {
    cout << "\nThe girl in the " << i << " position is " << ages[i] << " years old";
  }

  return 0;
}