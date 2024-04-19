#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
  ItemToPurchase item1, item2;

  cout << "Item 1" << endl << "Enter the item name:" << endl;
  string name1;
  getline(cin, name1);
  item1.SetName(name1);

  cout << "Enter the item price:" << endl;
  int price1;
  cin >> price1;
  item1.SetPrice(price1);

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
