#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"


void PrintMenu() {
   cout << "MENU" << endl;
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output items' descriptions" << endl;
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   
   if (option == 'q') {
      break;
   } else {
      switch(option) {
         case 'a':
            theCart.AddItem(ItemToPurchase item);
            break;
         case 'd':
            theCart.RemoveItem(string itemName);
            break;
         case 'c':
            theCart.ModifyItem(ItemToPurchase item);
            break;
         case 'i':
            theCart.PrintDescriptions();
            break;
         case 'o':
            theCart.PrintTotal();
            break;
         default:
            cout << "Choose an option:" << endl;
            cin >> option;
            
      }
   }
}

int main() {

  cout << "Enter customer's name:" << endl;
  string name;
  getline(cin, name);

  cout << "Enter today's date:" << endl;
  string date;
  getline(cin, date);
  
  ShoppingCart cart(name, date);
  
  cout << "Customer name: " << cart.GetCustomerName() << endl;
  cout << "Today's date: " << cart.GetDate() << endl;

  cout << "Enter the item quantity:" << endl;
  int quantity1;
  cin >> quantity1;
  item1.SetQuantity(quantity1);

  cout << endl;
  
  cin.ignore();

  cout << "Item 2" << endl << "Enter the item name:" << endl;
  string name2;
  getline(cin, name2);
  item2.SetName(name2);

  cout << "Enter the item price:" << endl;
  int price2;
  cin >> price2;
  item2.SetPrice(price2);

  cout << "Enter the item quantity:" << endl;
  int quantity2;
  cin >> quantity2;
  item2.SetQuantity(quantity2);

  cout << endl;

  cout << "TOTAL COST" << endl;

  int cost1 = item1.GetQuantity() * item1.GetPrice();
  int cost2 = item2.GetQuantity() * item2.GetPrice();

  cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << cost1 << endl;
  cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << cost2 << endl;

  cout << endl;

  int totalcost = cost1 + cost2;

  cout << "Total: $" << totalcost << endl;


   
   return 0;
}
