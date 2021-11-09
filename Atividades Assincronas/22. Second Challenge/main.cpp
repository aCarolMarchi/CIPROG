#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int exchange;
  double amount, currencyExchange;

  cout << fixed << setprecision(2);

  do{
    cout << "----- MAORI CURRENCY EXCHANGE HOUSE -----\n\nDear customer, welcome to MaOri Currency Exchange House. Here we exchange the Real currency for the Swiss Franc, Pound Sterling and US Dollar currencies.\n\nThe menu below shows which of these currencies you can trade for. Just enter the number corresponding to the desired currency.\n\n[1] Swiss Franc\n[2] Pound Sterling\n[3] US Dollar\n\n";
  cin >> exchange;
  } while (exchange < 1 || exchange > 3);

  switch (exchange){
    case 1:
      cout << "\nEnter the amount you want to get in Swiss Francs. SFr ";
      cin >> amount;

      currencyExchange = amount * 5.82;

      cout << "\nTo get " << amount << " Swiss Franc you must exchange R$ " << currencyExchange;
      break;

    case 2:
      cout << "\nEnter the amount you want to get in Pounds Sterling. £ ";
      cin >> amount;

      currencyExchange = amount * 7.34;

      cout << "\nTo get " << amount << " Pound Sterling you must exchange R$ " << currencyExchange;
      break;

    case 3:
      cout << "\nEnter the amount you want to get in US Dollars. U$ ";
      cin >> amount;

      currencyExchange = amount * 5.28;

      cout << "\nTo get " << amount << " US Dollar you must exchange R$ " << currencyExchange;
      break;
  }

  return 0;
}