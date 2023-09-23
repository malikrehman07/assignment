#include <iostream>
using namespace std;
int main() {
    int base, exponent, result = 1;
    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;
    do {
        result *= base;
        exponent--;
    } while (exponent > 0);

    cout << "Result: " << result <<endl;

    return 0;
}