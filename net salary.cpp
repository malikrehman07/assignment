#include <iostream>
using namespace std;
int main() {
    double salary, netSalary;
    cout << "Enter the salary: $";
    cin >> salary;
    if (salary >= 20000) {
        netSalary = salary * 0.93;  
    } else if (salary >= 10000) {
        netSalary = salary - 1000; 
    } else {
        netSalary = salary;  
    }
    cout << "Net salary after deductions: $" << netSalary << endl;

    return 0;
}