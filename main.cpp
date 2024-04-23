#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h"


void PrintMenu() {
    cout << "\nMENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
}

// Step 5: Implement the ExecuteMenu() function
void ExecuteMenu(char choice, ShoppingCart& cart) {
    switch (choice) {
        case 'a': {
            // Add item to cart
            cout << "\nADD ITEM TO CART" << endl;
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

            cin.ignore(); // Ignore the newline character left in the input buffer

            ItemToPurchase newItem(itemName, itemDescription, itemPrice, itemQuantity);
            cart.AddItem(newItem);
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
            cout << "\nOUTPUT SHOPPING CART" << endl;
            cart.PrintTotal();
            break;
        case 'q':
            // Quit
            cout << "Goodbye!" << endl;
            break;
        default:
            // Invalid choice
            cout << "Invalid option! Please try again." << endl;
    }
}

int main() {
    // Step 3: Prompt the user for a customer's name and today's date
    cout << "Enter customer's name:" << endl;
    string customerName;
    getline(cin, customerName);

    cout << "Enter today's date:" << endl;
    string currentDate;
    getline(cin, currentDate);

    // Output the name and date
    cout << "\nCustomer name: " << customerName << endl;
    cout << "Today's date: " << currentDate << endl;

    // Create an object of type ShoppingCart
    ShoppingCart cart(customerName, currentDate);

    char choice;

    // Step 5: Display the menu, prompt for the user's choice, and execute the option
    do {
        PrintMenu();
        cout << "Choose an option:" << endl;
        cin >> choice;
        cin.ignore(); // Ignore the newline character left in the input buffer

        ExecuteMenu(choice, cart);

    } while (choice != 'q');

    return 0;
}
