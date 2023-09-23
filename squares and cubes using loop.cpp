#include <iostream>
using namespace std;
int main() {
    int values[5];

cout << "Enter five values:" <<endl;
    for (int i = 0; i < 5; i++) {
    cout << "Value " << i + 1 << ": ";
        cin >> values[i];
    }
    cout << "Value\tSquare\tCube" <<endl;
    for (int i = 0; i < 5; i++) {
    cout << values[i] << "\t" << values[i] * values[i] << "\t" << values[i] * values[i] * values[i] <<endl;
    }
    return 0;
}