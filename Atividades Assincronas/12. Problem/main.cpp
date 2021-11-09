#include <iostream>
using namespace std;

int main() {
  int number[10];

  cout << "SQUARE GAME\n";

  for (int i = 0; i < 10; i++){
    cout << "\nType a number and I'll tell you its square: ";
    cin >> number[i];
    cout << "The square of the number " << number[i] << " is equal to " << number[i] * number[i] << "\n";
  }

return 0;
}