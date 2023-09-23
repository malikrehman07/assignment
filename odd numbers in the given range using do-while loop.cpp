#include <iostream>
using namespace std;
int main() {
    int start, end;
    cout << "Enter the starting point: ";
    cin >> start;

    cout << "Enter the ending point: ";
    cin >> end;

    cout << "Odd numbers in the given range: ";
    if (start % 2 == 0)
        start++;
    do {
        std::cout << start << " ";
        start += 2;  
    } while (start <= end);

    std::cout << std::endl;

    return 0;
}