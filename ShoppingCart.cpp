#include <iostream>
using namespace std;

#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() {
   
}

ShoppingCart::ShoppingCart(string name, string date) {
   customerName = name;
   currentDate = date;
}

string ShoppingCart::GetCustomerName() {
   return customerName;
}

string ShoppingCart::GetDate() {
   return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase item) {
   cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string itemName) {
   // fill in when you know what to put
}

void ShoppingCart::ModifyItem(ItemToPurchase item) {
   // fill in when you know what to put
}

int ShoppingCart::GetNumItemsInCart() {
   return cartItems.size();
}

int ShoppingCart::GetCostOfCart() {
   // fill in when you know what to put
}

void ShoppingCart::PrintTotal() {
   // fill in later
}

void ShoppingCart::PrintDescriptions() {
   // fill in later
}



