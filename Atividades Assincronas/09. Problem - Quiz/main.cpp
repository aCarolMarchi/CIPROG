#include <iostream>
using namespace std;

int main(){
  int score = 0, answer, total;

  cout << "DEV QUIZ\n\nLet's see how dev you are? Answer the 5 questions below and find out how dev you are.\n\n*NOTE: Enter 1 whenever you think the answer is true and 2 whenever you think the answer is false.\n\n";
  
  cout << "1st ASSERTIVE - Every String is a variable, but not every variable is a string.\n[1] TRUE\n[2] FALSE\n\n";
  cin >> answer;
  if (answer == 1){
    score += 1;
  }

  cout << "\n2nd ASSERTIVE - IF and ELSE are examples of repetition structures.\n[1] TRUE\n[2] FALSE\n\n";
  cin >> answer;
  if (answer == 2) {
    score += 1;
  }

  cout << "\n3rd ASSERTIVE - The number 0 represents the first number of an index.\n[1] TRUE\n[2] FALSE\n\n";
  cin >> answer;
  if (answer == 1){
    score += 1;
  }

  cout << "\n4th ASSERTIVE  - WHILE isn't an example of a conditional structure.\n[1] TRUE\n[2] FALSE\n\n";
  cin >> answer;
  if (answer == 1){
    score += 1;
  }

  cout << "\n5th ASSERTIVE - Not every logical expression returns a Boolean value.\n[1] TRUE\n[2] FALSE\n\n";
  cin >> answer;
  if(answer == 2){
    score += 1;
  }

  total = score;

  if (score >= 4){
    cout << "\nOf the 5 possible questions you got it right " << score;
    cout << "\nVery well! You are an excellent dev. Continue on this path and you will reap great rewards.";
  } else if(score >= 2 && score < 4){
     cout << "\nOf the 5 possible questions you got it right " << score;
    cout << "\nYou're a good dev, but you can be even better. Try to study a little more to become an excellent dev.";
  } else{
    cout << "\nOf the 5 possible questions you got it right " << score;
    cout << "\nYou're not such a good dev yet, but keep studying to one day be the best dev.";
  } 
  
  return 0;
} 