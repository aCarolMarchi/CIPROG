#include <iostream>
using namespace std;

int main() {
  int number = 1, sum = 0;

  while(number != 0){
    cout << "\nType a number: ";
    cin >> number;

    if(number >= 100 && number <= 200){
      cout << "The number " << number << " it's somewhere between the number 100 and the number 200.\n";
      sum++;
    }
  }

  cout << sum << " numbers entered were between 100 and 200.";

  return 0;
}