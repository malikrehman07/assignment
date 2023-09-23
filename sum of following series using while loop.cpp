  #include <iostream>
using namespace std;
int main() {
    int i = 1;
    double sum = 0.0;
while (i <= 100) {
        sum += 1.0 / i;
        i += 2;  
    }
    cout << "Sum of the series: " << sum <<endl;

    return 0;
}

