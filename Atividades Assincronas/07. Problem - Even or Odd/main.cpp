#include <iostream>
using namespace std;

int main(){
  int number;

  cout << "EVEN OR ODD?\n\nType in a number and I'll tell you if it's odd or even. So the challenge is high?!\n\n";
  cin >> number;

  if (number % 2 == 0){
    cout << "\nThe number " << number << " is even.";
  } else {
    cout << "\nThe number " << number << " is odd.";
  }

  return 0;
}