 #include <iostream>
using namespace std;
int main() {
    int i = 1;
    double sum = 0.0;

    do {
        sum += 1.0 / i;
        i += 2;  
    } while (i <= 100);

    cout << "Sum of the series: " << sum <<endl;

    return 0;
}