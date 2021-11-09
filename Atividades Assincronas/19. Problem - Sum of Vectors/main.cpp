#include <iostream>
using namespace std;

int main() {
  int numberA[10], numberB[10], numberC[10];

  cout << "FUN SUM!\n\n";
  cout << "Enter 10 numbers. Then type 10 more and I'll tell you what is the sum of each number in their respective positions.\n\ne.g.: 1st number A = 10, 1st number B = 2, the sum result will be 12. Let's play?\n\n";

  for (int i = 0; i < 10; i++) {
    cout << i + 1 << "\tnumber A: ";
    cin >> numberA[i];
  }

  cout << "\n";

  for (int i = 0; i < 10; i++) {
    cout << i + 1 << "\tnumber B: ";
    cin >> numberB[i];
  }

  for (int i = 0; i < 10; i++){
    numberC[i] = numberA[i] + numberB[i];
    
    cout << "\nThe " << i + 1 << "\tnumber A + the " << i + 1 << "\tnumber B is equal to " << numberC[i];
  }
  
  return 0;
}