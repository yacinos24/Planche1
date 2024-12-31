#include <iostream>

using namespace std;
double kmToMiles(double km) {
    return km * 0.621371;
}

// Function to convert miles to kilometers
double milesToKm(double miles) {
    return miles / 0.621371;
}

int main() {
    int choice;
    double value;

    cout << "Choose an option:" << endl;
    cout << "1. Convert kilometers to miles" << endl;
    cout << "2. Convert miles to kilometers" << endl;
    cin >> choice;
    cout << "Enter the value: ";
    cin >> value;
    if (choice == 1) {
        cout << value << "Km=" << value*0.621371 << " miles." << endl;
    } else if (choice == 2) {
        cout << value << "Km=" << value / 0.621371 << " kilometers." << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
