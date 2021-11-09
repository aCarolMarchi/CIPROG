#include <iostream>
using namespace std;

int main() {
  int answer;

  do {
    cout << "\nYES or NO?\n\nType 0 for YES and 1 for NO.\n\n";
    cout << "[0] YES\n[1] NO\n\nType here: ";
    cin >> answer;
  } while (answer < 0 || answer > 1);

  if (answer == 0) {
    cout << "\nYour answer was YES";
  } else if (answer == 1) {
    cout << "\nYour answer was NO";
  }

  return 0;
}