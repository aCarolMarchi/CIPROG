#include <iostream>
using namespace std;

int main(){
  int number1, number2, sum;

  cout << "FUN SUM\n\n";
  cout << "The game works like this: you'll type in two numbers and I'll add them up. If the sum value is greater than 20, I will add to that value plus 8. However, if the sum of the two numbers is less than or equal to 20, I will decrease that value by 5. Let's play?\n\nEnter the 1st number: ";
  cin >> number1;
  cout << "\nEnter the 2nd number: ";
  cin >> number2;

  sum = number1 + number2;
  if (sum > 20){
    cout << "\nThe sum of the two numbers was greater than 20, then added to 8, the final result was: " << sum + 8;
  } else{
    cout << "\nThe sum of the two numbers was less than or equal to 20, so decreasing 5, the final result was: " << sum - 5;
  }

  cout << "\n\nDid you like the game? So call your friends to play too!";

  return 0;
}