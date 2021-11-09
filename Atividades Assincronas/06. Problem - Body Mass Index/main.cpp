#include <iostream>
#include <iomanip>
using namespace std;

void utterance(){
  cout << "\nBMI CALCULATOR\n\n";
  cout << "BMI is the acronym for Body Mass Index, a parameter adopted by the World Health Organization - WHO - to calculate the ideal weight of each person.\n\nThe index is calculated as follows: the person's weight is divided by their height squared.\n\nThe individual is said to have normal weight when the BMI result is between 18.5 and 24.9.\n\nWant to find out your BMI?\n\nEnter 1 for YES and 2 for NO.\n\n";
  }

void calculateBMI (int answer){
  double weight, height, BMI;

  switch (answer){
    case 1:
      cout << "\nTo continue enter your weight in kilos (e.g.: 67) = ";
      cin >> weight;

      cout << "Now enter your height in meters (e.g.: 1.75) = ";
      cin >> height;

      BMI = weight / (height * height);
      cout << fixed << setprecision(1);
      
      if (BMI < 18.5){
        cout << "\nYour BMI = " << BMI << ". In the BMI table you are at the VERY SKINNY level.";
      } else if (BMI >= 18.5 && BMI <= 24.9){
        cout << "\nYour BMI = " << BMI << ". In the BMI table you are at NORMAL level.";
      } else if (BMI >= 25.0 && BMI <= 29.9){
        cout << "\nYour BMI = " << BMI << ". In the BMI table you are at OVERWEIGHT  level - Obesity grade I";
      } else if (BMI >= 30.0 && BMI <= 39.9){
        cout << "\nYour BMI = " << BMI << ". In the BMI table you are at OVERWEIGHT  level - Obesity grade II";
      } else {
        cout << "\nYour BMI = " << BMI << ". In the BMI table you are at SERIOUS OBESITY level - Obesity grade III";
      }
      break;

    case 2:
      cout << "\nIt's okay. If you feel like it, come back later.";
      break;
  }
}

int main(){
  int answer;

  do{
    utterance();
    cin >> answer;
  } while (answer < 1 || answer > 2);

  calculateBMI(answer);
  
  return 0;
}