#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */
ItemToPurchase::ItemToPurchase() {
   
}

string ItemToPurchase::GetName() {
 return itemName;  
}

int ItemToPurchase::GetQuantity() {
 return itemQuantity;  
}
int ItemToPurchase::GetPrice() {
 return itemPrice;  
}

void ItemToPurchase::PrintItemCost() {
   cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemPrice * itemQuantity << endl;
}

void ItemToPurchase::PrintItemDescription() {
   cout << itemName << ": " << itemDescription << endl;
}

void ItemToPurchase::SetName(string name) {
 itemName = name;  
}

void ItemToPurchase::SetQuantity(int quantity) {
 itemQuantity = quantity;  
}

void ItemToPurchase::SetPrice(int price) {
 itemPrice = price;  
}
