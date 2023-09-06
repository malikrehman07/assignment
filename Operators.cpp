#include <iostream>
using namespace std;
int main(){ 
int a = 30;
int b = 40;
//Arithmatic operators
cout<< "Addition of a and b is " << a + b << endl;
cout<< "Subtraction of a and b is " << a - b << endl;
cout<< "Multiplication of a and b is " << a * b << endl;
cout<< "Division of a and b is " << a / b << endl;
cout<< "Modulus of a and b is " << a % b << endl;
cout<< "Increase the value of a variable by 1 using post increment " << a++ << endl;
cout<< "Increase the value of a variable by 1 using pre increment " << ++a << endl;
cout<< "Decrease the value of a variable by 1 using post increment " << a-- << endl;
cout<< "Decrease the value of a variable by 1 using pre increment " << --a << endl;
//Assignment Operator
int marks = 10;
cout<< " The marks are " << marks << endl;
//Compound Assignment and Additional Assignment Operators
marks += 10;
marks -= 20;
marks *= 30;
marks /= 40;
marks %= 50;
// Comparison Operator
cout<< (a > b) << endl;
cout<< (a < b) << endl;
cout<< (a <= b) << endl;
cout<< (a <= b) << endl;
cout<< (a != b) << endl;
cout<< (a == b) << endl;
//Logical Operators
bool isBoy = true;
bool isGirl = true;
cout<< ( isBoy && isGirl ) << endl;
cout<< ( isBoy || isGirl ) << endl;
cout<< !(isBoy) << endl;
return 0;
}