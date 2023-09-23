 #include <iostream>
using namespace std;
int main() {
    double num1, num2, num3, smallest;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    cout << "The smallest number is: " << smallest ;

    return 0;
}