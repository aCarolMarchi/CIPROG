#include <iostream>
#include <iomanip>
using namespace std;

int studentPortalMenu (int menu){
  float grade1, grade2, average;

  cout << fixed << setprecision(2);
  
  switch (menu) {
    case 1:
      cout << "\nTo calculate the weighted average, enter the two grades obtained, remembering that the first grade (A) has a weight of 3.0 and the second (B) has a weight of 7.0.\n\n";
      cout << "Enter the first grade.\n";
      cin >> grade1;

      cout << "\nNow, enter the second grade..\n";
      cin >> grade2;

      average = ((grade1 * 3.0) + (grade2 * 7.0)) / 10.0;

      if (average < 7.0) {
        cout << "\nToo bad, you failed. Study a little more and try again.";
        cout << "\nYour weighted average is: " << average;
      } else if (average == 7.00){
          cout << "\nPhew, you barely escaped! You passed, but it could get better, don't you think?";
          cout << "\nYour weighted average is: " << average;
        } else {
            cout << "\nCongratulations, you were approved!";
            cout << "\nYour weighted average is: " << average;
        }
      break;

    case 2:
      cout << "Are you already leaving? What a pity. :(\n";
      cout << "But don't worry, feel free to come back whenever you want.";
      break;
  }
  
  return menu;
}

int main() {
  int menu;

  do{
    cout << "STUDENT'S PORTAL\n\n";
    cout << "Dear student, welcome to the Student's Portal. If you want to find out your weighted average,enter 1, otherwise enter 2 to leave.\n\n";
    cout << "[1] Calculate Weighted Average\n[2] Leave\n\n";
    cin >> menu;
    } while (menu < 1 || menu > 2);
  
  studentPortalMenu(menu);

  return 0;
}