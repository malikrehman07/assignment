#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 7; i++) 
	{
    cout << i << "\t" << (1 << (i - 1)) <<endl;
    }

    return 0;
}