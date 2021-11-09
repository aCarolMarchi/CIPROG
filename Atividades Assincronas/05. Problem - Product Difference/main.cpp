#include <iostream>
using namespace std;

void instructions(){
  cout << "CALCULATING THE DIFFERENCE\n\n";
  cout << "Let's solve the expression ((A * B) - (C * D))?\nEnter 1 for YES and 2 for NO.\n\n[1] YES\n[2] NO\n\n";
  }

void operation(int answer){
  int A, B, C, D, result;
  
  switch (answer){
    case 1:
      cout << "\nAll right, to continue you will need to assign 4 numbers to A, B, C and D.\n\nEnter a number for A = ";
      cin >> A;
      
      cout << "Now, enter a number for = ";
      cin >> B;

      cout << "We are almost there. Enter a number for C = ";
      cin >> C;

      cout << "Finally, enter a number for D = ";
      cin >> D;

      result = ((A * B) - (C * D));

      cout << "\nThe result of the expression ((A * B) - (C * D)) = " << result;
      break;
    case 2:
      cout << "Too bad, if you want to try another time, feel free to go back.";
      break;
  }
}

int main(){
  int answer;

  do{
    instructions();
    cin >> answer;
  } while (answer < 1 || answer > 2);
  operation(answer);
  
  return 0;
}