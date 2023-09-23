 #include <iostream>
using namespace std;
int main() {
    double num1, num2, num3, maximum;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    maximum = num1;
    if (num2 > maximum) {
        maximum = num2;
    }
    if (num3 > maximum) {
        maximum = num3;
    }
    cout << "The maximum number is: " << maximum;

    return 0;
}