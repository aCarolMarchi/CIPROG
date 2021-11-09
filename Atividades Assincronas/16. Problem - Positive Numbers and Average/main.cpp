#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float number, positiveSum = 0, positiveQuantity = 0, positiveAverage;

  for (int i = 0; i < 6; i++) {
    cout << "\nType a number: ";
    cin >> number;

    if (number >= 0) {
      positiveSum += number;
      positiveQuantity++;
    }
  }

  cout << "\nOf the 6 numbers entered, " << positiveQuantity << " numbers are positive.";
  positiveAverage = positiveSum / positiveQuantity;
  cout << fixed << setprecision(1);
  cout << "\nThe average of the positive numbers is: " << positiveAverage;

  return 0;
}