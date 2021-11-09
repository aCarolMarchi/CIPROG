#include <iostream>
using namespace std;

int main() {
  
  std::string answer;
  int A, B, X;

  A = 0;
  B = 0;

  cout << "Hi, I'm Carol and I'm here to help you figure out the result of any integer addition operation. What do you think about trying? Enter YES to continue or NO to leave.\n\n";
  cin >> answer;

  if (answer == "YES" || answer == "Yes" || answer == "yes") {
      cout << "\nGreat! I'm glad you wanna try it. Now, please, type a number for A. This will be our first number.\n\n";
      cin >> A;

      cout << "\nNice! Now, please, type a number for B and see the magic happen. The result of our addition operation will be equal to X. Alright? What are you waiting for? Type a number for B, my dear.\n\n";
      cin >> B;

      X = A + B;

      cout << "\nThe result is X = " << X;
      cout << "\nThank you for your participation. See you later, budy!";
  } else {
      cout << "\nOh no, you're leaving. :(\nWell, fill confortable to come back anytime you want. Ok? See ya! ;)";
    }

  return 0;
}