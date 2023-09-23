  #include <iostream>
using namespace std;
int main() {
    int count = 1; 
    int sum = 0; 

    while (count <= 5) {
        cout << count << " ";
        sum += count;             
        count++;  
    }
    cout << "\nSum of the first five numbers: " << sum <<endl;

    return 0;
}