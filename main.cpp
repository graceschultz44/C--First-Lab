#include <iostream>
#include <string>
using namespace std;

// Option 1
void option1() {
    string description;
    int i;
    int sum = 0;
    cout << "Enter description: ";
    cin.ignore();
    getline(cin, description); // gathers the whole line

    for(i = 0; i < description.length(); i++) { // for loop to go through the string
        sum += description.at(i)+0;
    }
    while(sum < 10000) {
        sum = sum * 10;
    }
    cout << "Product number: " << sum << endl;
    cout << endl;
}
// Option 2
void option2() {
    int hashValue5;
    int oddPosition;
    int evenPosition;
    int sum;
    int checkDigit;
    cout << endl;
    cout << "Enter 5-digit product hash value: ";
    cin >> hashValue5;
    // Creates a value for each number value
    int hashValue0 = hashValue5 / 10000 % 10;
    int hashValue1 = hashValue5 / 1000 % 10;
    int hashValue2 = hashValue5 / 100 % 10;
    int hashValue3 = hashValue5 / 10 % 10;
    int hashValue4 = hashValue5 % 10;

    // Calculates the check digit
    oddPosition = (hashValue0 + hashValue2 + hashValue4) * 3;
    evenPosition = hashValue1 + hashValue3;
    sum = oddPosition + evenPosition;
    checkDigit = 10 - (sum % 10);
    cout << "SKU with check digit = " << hashValue5 << checkDigit << endl;
    cout << endl;
}
// Option3
void option3() {
    int oddPosition;
    int evenPosition;
    int sum;
    int checkDigit;
    int sku;
    cout << "Enter 6-digit SKU: ";
    cin >> sku;
    // Creates a value for each number value
    int sku0 = sku / 100000 % 10;
    int sku1 = sku / 10000 % 10;
    int sku2 = sku / 1000 % 10;
    int sku3 = sku / 100 % 10;
    int sku4 = sku / 10 % 10;
    int sku6 = sku % 10;
    // Calculates the correct check digit
    oddPosition = (sku0 + sku2 + sku4) * 3;
    evenPosition = sku1 + sku3;
    sum = oddPosition + evenPosition;
    checkDigit = 10 - (sum % 10);
    // If-else loop to evaluate if the check digit is correct
    if(sku6 != checkDigit) {
        cout << "SKU is not valid" << endl;
        cout << endl;
    }
    else {
        cout << "SKU is valid" << endl;
        cout << endl;
    }
}
// Option 4
void option4() {
    // while loop to break
    while(0 == 0) {
        break;
    }
}
// Main method, "menu"
int main() {

    int choice;
    // Asks the user what their choice is
    cout << "MENU" << endl;
    cout << "1. Generate product hash value" << endl;
    cout << "2. Generate SKU from product hash value" << endl;
    cout << "3. Verify SKU" << endl;
    cout << "9. Exit" << endl;
    cout << "Enter choice: " << endl;

    cin >> choice;
    cin.clear();
    // Directs the user once they make a choice
    if (choice == 1) {
        option1();// calls option1
        main();// calls main
    } else if (choice == 2) {
        option2();// calls option2
        main();// calls main
    } else if (choice == 3) {
        option3();// calls option3
        main();// calls main
    } else if (choice == 9) {
        option4();// calls option4
    } else { // option for invalid input
        cout << "Error, please enter a valid entry." << endl;
        cout << endl;
        main(); // calls main
    }
    return 0;
}