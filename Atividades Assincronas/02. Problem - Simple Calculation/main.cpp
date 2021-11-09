#include <iostream>
#include <iomanip>
using namespace std;

void displayMainMenu() {
  cout << "----- MAIN MENU OF STABILO STORE -----\n\n";
  cout << "[1] Stabilo Point 88 - R$ 7.65\n[2] Stabilo PointMax - R$ 17.84\n[3] Stabilo Sensor - R$ 11.90\n[4] Stabilo Palette - R$ 16.75\n[5] Stabilo Pointball - R$ 29.90\n[6] Stabilo Re-liner - R$ 4.20\n[7] Stabilo Liner 808 - R$ 8.90\n[8] Stabilo Worker+ - R$ 27.14\n[9] Stabilo Performer+ - R$ 9.90\n\n";
} 

double calculateTotal (int product, int quantity) {
  double total;
  
  switch (product){
    case 1:
      total = 7.65 * quantity;
      cout << "Stabilo Point 88 - " << quantity << " x R$ 7.65 = R$ " << total;
      break;

    case 2:
      total = 17.84 * quantity;
      cout << "Stabilo PointMax - " << quantity << " x R$ 17.84 = R$ " << total;
      break;

    case 3:
      total = 11.90 * quantity;
      cout << "Stabilo Sensor - " << quantity << " x R$ 11.90 = R$ " << total;
      break;

    case 4:
      total = 16.75 * quantity;
      cout << "Stabilo Palette - " << quantity << " x R$ 16.75 = R$ " << total;
      break;

    case 5:
      total = 29.90 * quantity;
      cout << "Stabilo Pointball - " << quantity << " x R$ 29.90 = R$ " << total;
      break;

    case 6:
      total = 4.20 * quantity;
      cout << "Stabilo Re-liner - " << quantity << " x R$ 4.20 = R$ " << total;
      break;

    case 7:
      total = 8.90 * quantity;
      cout << "Stabilo Liner 808 - " << quantity << " x R$ 8.90 = R$ " << total;
      break;

    case 8:
      total = 27.14 * quantity;
      cout << "Stabilo Worker+ - " << quantity << " x R$ 27.14 = R$ " << total;
      break;

    case 9:
      total = 9.90 * quantity;
      cout << "Stabilo Performer+ - " << quantity << " x R$ 9.90 = R$ " << total;
      break;
  }
  
  return total;
}
  
int main() {
  double total = 0;
  int product1, product2, quantityProduct1, quantityProduct2;

  cout << "STABILO STORE\n\n";
  cout << "Welcome to the Stabilo Store. Girl, if you are looking for wonderful pens you have come to the right place!\n\n";
  cout << "In the menu below you will find the available products and their respective prices. To select one, just type the number referring to the desired product and, after, type the quantity. If you want to buy more than one product, just repeat the procedure above.\n\n";
  cout << "Good shopping! <3\n\n";

   do{
    displayMainMenu();
    cin >> product1;
  } while (product1 < 1 || product1 > 9);

  cout << "\nEnter the number for the desired quantity: ";
  cin >> quantityProduct1;

  cout << "\nNow choose the second product.\n\n";
  
  do{
    displayMainMenu();
    cin >> product2;
  } while (product2 < 1 || product2 > 9);

  cout << "\nEnter the number for the desired quantity: ";
  cin >> quantityProduct2;

  cout << fixed << setprecision(2);

  cout << "\nYour cart has:\n\n";
  total = calculateTotal(product1, quantityProduct1);
  cout << "\n";
  total += calculateTotal(product2, quantityProduct2);
  cout << "\n\nTotal - R$ " << total;

  return 0;
}