#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <string>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"

class ShoppingCart { 
public:

   ShoppingCart();
   ShoppingCart(string name, string date);
   
   string GetCustomerName();
   string GetDate();
   
   void AddItem(ItemToPurchase& item);
   
   void RemoveItem(string itemName);
   
   void ModifyItem(ItemToPurchase& item);
   
   int GetNumItemsInCart();
   
   int GetCostOfCart();
   
   void PrintTotal();
   
   void PrintDescriptions();

private:
   string customerName = "none";
   string currentDate = "January 1, 2016";
   vector<ItemToPurchase> cartItems;
};

#endif