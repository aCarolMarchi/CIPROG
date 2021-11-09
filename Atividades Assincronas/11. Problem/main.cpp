#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Hey, let's play a game? To participate, just type a number and I'll tell you if this number is divisible by 3 and 7 simultaneously. Let's go?\n\nEnter the number here: ";
  cin >> number;

  if(number % 3 == 0 && number % 7 == 0){
    cout << "\nLook how nice, the number " << number << " is divisible simultaneously by 3 and 7.";
  } else if (number % 3 == 0 && number % 7 != 0){
    cout << "\nThe number " << number << " is divisible by 3, but it's note divisible by 7.";
  } else if (number % 3 != 0 && number % 7 == 0){
    cout << "\nThe number " << number << " is divisible 7, but it's note divisible by 3.";
  } else {
    cout << "\nThe number " << number << " is not divisible by 3 neither it's divisible by 7.";
  }

  return 0;
}