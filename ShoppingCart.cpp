#include <iostream>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"

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

void ShoppingCart::AddItem(ItemToPurchase& item) {
   cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string itemName) {
    
    bool found = false;

    for (auto it = cartItems.begin(); it != cartItems.end(); ++it) {
        if (it->GetName() == itemName) {
            cartItems.erase(it);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found in cart. Nothing removed." << endl;
    }

}


void ShoppingCart::ModifyItem(ItemToPurchase& item) {
   bool found = false;
    for (auto& it : cartItems) {
        if (it.GetName() == item.GetName()) {
            if (item.GetDescription() != "none") {
                it.SetDescription(item.GetDescription());
            }
            if (item.GetPrice() != 0) {
                it.SetPrice(item.GetPrice());
            }
            if (item.GetQuantity() != 0) {
                it.SetQuantity(item.GetQuantity());
            }
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
}

int ShoppingCart::GetNumItemsInCart(){
   int totalItems = 0;
    for (auto& item : cartItems) {
        totalItems += item.GetQuantity();
    }
    return totalItems;
}

int ShoppingCart::GetCostOfCart() {
   int totalCost = 0;
    for (auto& item : cartItems) {
        totalCost += (item.GetPrice() * item.GetQuantity());
    }
    return totalCost;
}

void ShoppingCart::PrintTotal() {
   if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
        return;
    }

    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl << endl;
    for (auto& item : cartItems) {
        item.PrintItemCost();
    }
    cout << endl << "Total: $" << GetCostOfCart() << endl;
}

void ShoppingCart::PrintDescriptions() {
   if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
        return;
    }

    cout << customerName << "'s Shopping Cart - " << currentDate << endl << endl;
    cout << "Item Descriptions" << endl;
    for (auto& item : cartItems) {
        item.PrintItemDescription();
    }
}



