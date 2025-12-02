#include <iostream>
using namespace std;

int main() {
    int choice;
    double celsius, fahrenheit;

    cout << "=== Temperature Converter ===" << endl;
    cout << "1. Convert Celsius to Fahrenheit" << endl;
    cout << "2. Convert Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << "F" << endl;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << celsius << "C" << endl;
    }
    else {
        cout << "Invalid choice! Please run the program again." << endl;
    }

    return 0;
}
