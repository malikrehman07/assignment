#include <iostream>
using namespace std;
int main() {
    int tableNumber, tableLength;

    cout << "Enter the table number: ";
    cin >> tableNumber;

    cout << "Enter the table length: ";
    cin >> tableLength;
    cout << "Table of " << tableNumber << ":" << std::endl;
    for (int i = 1; i <= tableLength; i++) {
    cout << tableNumber << " x " << i << " = " << tableNumber * i << std::endl;
    }

    return 0;
}