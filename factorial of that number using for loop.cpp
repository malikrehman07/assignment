 #include <iostream>
using namespace std;
int main() {
    int number;
    int factorial = 1;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << number << " = " << factorial <<endl;

    return 0;
}