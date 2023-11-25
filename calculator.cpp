#include<iostream>
#include"calculator.h"
using namespace std;
int main(){
    int num1 , num2;
    cout<<"Enter Any 2 numbers"<<endl;
    cin>>num1>>num2;
cout<<"The Addition of num1 and num2: "<<calculator::sum(num1,num2)<<endl;
cout<<"Enter Any 2 numbers"<<endl;
    cin>>num1>>num2;
cout<<"The Subtraction of num1 and num2: "<<calculator::sub(num1,num2)<<endl;
cout<<"Enter Any 2 numbers"<<endl;
    cin>>num1>>num2;
cout<<"The Multiplication of num1 and num2: "<<calculator::mul(num1,num2)<<endl;
cout<<"Enter Any 2 numbers"<<endl;
    cin>>num1>>num2;
cout<<"The Division of num1 and num2: "<<calculator::div(num1,num2)<<endl;
    return 0;
}