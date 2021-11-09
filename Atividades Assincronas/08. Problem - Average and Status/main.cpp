#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double grade1, grade2, grade3, grade4, average;

  cout << "STUDENT'S PORTAL\n\nDear student, welcome to your portal. Here you can access your average and find out if your status is Approved, Failed or In Recovery.\n\nTo start, type your first grade: ";
  cin >> grade1;

  cout << "\n\nNow enter your second grade ";
  cin >> grade2;

  cout << "\n\nHang in there, we're almost there. Insert your third grade: ";
  cin >> grade3;

  cout << "\n\nHallelujah, hallelujah, hallelujah, hallelujah, hallelujaaaaaaah. Enter your forth grade and let's find out your status: ";
  cin >> grade4;

  average = (grade1 + grade2 + grade3 + grade4) / 4;
  cout << fixed << setprecision(1);

  if (average >= 7){
    cout << "\nYour average this year is " << average << " and you're approved!";
  } else if (average > 5 && average <7){
    cout << "\nYour average this year is " << average << " and you're in recovery"; 
  } else{
    cout << "\nYour average this year is " << average << " and you failed.";
  } 
   
  return 0;
}