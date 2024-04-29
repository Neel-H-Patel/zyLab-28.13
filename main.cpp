#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"


void PrintMenu() {
    //TBF
}

// Step 5: Implement the ExecuteMenu() function
void ExecuteMenu(char choice, ShoppingCart& cart) {
    switch (choice) {
        case 'a': {
            // Add item to cart
            cout << "ADD ITEM TO CART" << endl;
            string itemName, itemDescription;
            int itemPrice, itemQuantity;

            cout << "Enter the item name:" << endl;
            getline(cin, itemName);

            cout << "Enter the item description:" << endl;
            getline(cin, itemDescription);

            cout << "Enter the item price:" << endl;
            cin >> itemPrice;

            cout << "Enter the item quantity:" << endl;
            cin >> itemQuantity;

            // Ignore the newline character left in the input buffer

            ItemToPurchase newItem(itemName, itemDescription, itemPrice, itemQuantity);
            cart.AddItem(newItem);
            
            break;
            
        }
        case 'f': {
            cout << "Enter customer's name:" << endl;

            cout << "Enter today's date:" << endl;

             break;
        }
        case 'd': {
            // Remove item from cart
            cout << "\nREMOVE ITEM FROM CART" << endl;
            string itemName;
            cout << "Enter name of item to remove:" << endl;
            getline(cin, itemName);
            cart.RemoveItem(itemName);
            
            break;
        }
        case 'c': {
            // Change item quantity
            cout << "\nCHANGE ITEM QUANTITY" << endl;
            string itemName;
            int newQuantity;

            cout << "Enter the item name:" << endl;
            getline(cin, itemName);

            cout << "Enter the new quantity:" << endl;
            cin >> newQuantity;

            cin.ignore(); // Ignore the newline character left in the input buffer

            ItemToPurchase newItem;
            newItem.SetName(itemName);
            newItem.SetQuantity(newQuantity);
            cart.ModifyItem(newItem);
            
            break;
        }
        case 'i':
            // Output items' descriptions
            cout << "\nOUTPUT ITEMS' DESCRIPTIONS" << endl;
            cart.PrintDescriptions();
            
            break;
        case 'o':
            // Output shopping cart
            cout << "OUTPUT SHOPPING CART" << endl;
            
            cart.PrintTotal();
            break;
        case 'q':
            // Quit
            break;
        default:
            // Invalid choice
            ;
    }
}

int main() {
    // Step 3: Prompt the user for a customer's name and today's date
    string customerName;
    getline(cin, customerName);
    
    string currentDate;
    getline(cin, currentDate);


    // Create an object of type ShoppingCart
    ShoppingCart cart(customerName, currentDate);

    char choice;
    
    cin >> choice;
    cin.ignore();
    
    
   //TBF

    return 0;
}
