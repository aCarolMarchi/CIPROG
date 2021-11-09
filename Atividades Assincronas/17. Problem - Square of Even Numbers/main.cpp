#include <iostream>
using namespace std;

int main(){
  int number;

  cout << "Type a number and I'll square all the even numbers up to the number you typed.\n\nType here: ";
  cin >> number;

  for (int i = 1; i <= number; i++){
    if( i % 2 == 0){
       cout << "\n" << i << "\tsquared is equal to\t"  << i * i;
    }
  }

  return 0;
} 