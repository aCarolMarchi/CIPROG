#include <iostream>
#include <iomanip>
using namespace std;

void menuPrincipal(){
  cout << "SELLER'S PORTAL\n\n";
  cout << "Dear seller,\n\nbe very welcome to your portal. In the menu below you can check the available options, if you want to know more about each one, just type the corresponding number.\n\n";
  cout << "----- SELLER'S MENU -----\n\n[1] Check fixed salary\n[2] Check the amount to be received in commission\n[3] Check salary receivable at the end of the month\n[4] Leave\n\n";
}

int opcoesMenu(int menu){
  #define commission 0.15;
  float valueInSalesMade, commissionValue, totalSalary, fixedSalary;

  switch (menu){
    case 1:
      cout << "\nEnter the amount of your fixed salary:   R$ ";
      cin >> fixedSalary;
      cout << "\nYour fixed salary is: R$ " << fixedSalary;
      break;
    case 2:
      cout << "\nTo check the amount to be received in commission, enter the amount of sales made in the respective month:   R$ ";
      cin >> valueInSalesMade;
      
      commissionValue = valueInSalesMade * commission;
      cout << fixed << setprecision(2);

      cout << "\nThis month you will receive R$ " << commissionValue << " of commission.";
      break;
    case 3:
      cout << "\nTo check the total salary to be received at the end of the month, enter your fixed salary amount:   R$ ";
      cin >> fixedSalary;

      cout << "\nNow enter the amount of sales made in the respective month:   R$ ";
      cin >> valueInSalesMade;

      commissionValue = valueInSalesMade * commission;
      totalSalary = fixedSalary + commissionValue;
      cout << fixed << setprecision(2);

      cout << "\nAt the end of this month you will receive R$ " << totalSalary << ", having already been added the value of the commission.";
      break;
    case 4:
      cout << "\nAre you leaving already? Everything is fine. Feel free to come back whenever you want.";
      break;
  }

  return 0;
}

int main(){
  int menu;
  
  cout << fixed << setprecision(2);
   
  do{
    menuPrincipal();
    cin >> menu;
  } while (menu < 1 || menu > 4);
  
  opcoesMenu(menu);
   
  return 0;
}