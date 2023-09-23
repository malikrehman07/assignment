#include <iostream>
using namespace std;
int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += factorial(i);
    }

    cout << "Sum of factorials: " << sum <<endl;

    return 0;
}