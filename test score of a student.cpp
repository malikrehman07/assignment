#include <iostream>
using namespace std;
int main() 
{
    int testScore;
    
    cout<< "Enter the score: ";
    cin >> testScore;

    char grade;
    if (testScore >= 90) {
        grade = 'A';
    } else if (testScore >= 80) {
        grade = 'B';
    } else if (testScore >= 70) {
        grade = 'C';
    } else if (testScore >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    cout << "Grade: " << grade ;

    return 0;
}