#include <iostream>
#include <cmath>
using namespace std;

void squareRoot(){
  double number, squaredNumber, squareRoot;

  cin >> number;

  squaredNumber = pow(number, 2);
  squareRoot = sqrt(number);

  cout << "\nthe entered number was: " << number;
  cout << "\nThe square of the number " << number << " is: " << squaredNumber;
  cout << "\nThe square root of the number " << number << " is: " << squareRoot;
}

int main(){
  double number, quadrado, raiz;

  cout << "Type in a number and let's figure out what its square and what its square root is.\n\n";
  
  squareRoot();
  return 0;
}