#include <iostream>
using namespace std;

int main() {
  int number[100], sum = 0;

  for (int i = 0; i < 100; i++){
    number[i] = i + 1;
    
    if(number[i] % 2 == 0){
      cout << "The number " << number[i] << " is even.\n";
      sum++;
    }
  }    

  cout << "\nBetween 1 and 100, " << sum << " numbers are even.";
    
  return 0;
}