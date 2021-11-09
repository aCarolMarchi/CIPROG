#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float grades[10], gradesSum = 0;

  for (int i = 0; i < 10; i++) {
    cout << "Enter the grade " << i + 1 << ":\t";
    cin >> grades[i];
    gradesSum += grades[i];
  }

  cout << fixed << setprecision(1);
  cout << "The average of the 10 grades is: " << gradesSum / 10;

  return 0;
} 