#include<iostream>
#include "TemperatureScale.h"
using namespace std;
int main(){
    float x, y;
    cout<<"Enter The Value in Celsius Which You want to convert in Fahrenheit"<<endl;
    cin>> x;
    cout<<"The value in Fahrenhite "<<Temperature::CtoF (x,y) <<"F"<<endl;

    cout<<"Enter The Value in Fahrenhite Which You want to convert in Celsius"<<endl;
    cin>> x;
    cout<<"The value in Celsius "<<Temperature::FtoC (x,y) <<"C"<<endl;

    cout<<"Enter The Value in Celsius Which You want to convert in Kelvin"<<endl;
    cin>> x;
    cout<<"The value in Kelvin "<<Temperature::CtoK (x,y) <<"K"<<endl;

    cout<<"Enter The Value in Kelvin Which You want to convert in Celsius"<<endl;
    cin>> x;
    cout<<"The value in Celsius "<<Temperature::KtoC (x,y) <<"C"<<endl;

    cout<<"Enter The Value in Fahrenhite Which You want to convert in Kelvin"<<endl;
    cin>> x;
    cout<<"The value in Celsius "<<Temperature::FtoK (x,y) <<"K"<<endl;

    cout<<"Enter The Value in Kelvin Which You want to convert in Fahernhite"<<endl;
    cin>> x;
    cout<<"The value in Celsius "<<Temperature::KtoF (x,y) <<"F"<<endl;
    char Temperature;
    cout << "Enter The Temperature: ";
    cin >> x;

    cout << "Enter an operation (C, K, F) : ";
    cin >> Temperature;

    switch (Temperature)
    {
    case 'C':
        cout<<Temperature:: CtoF (x,y) <<"F"<<endl;
        cout<<Temperature:: CtoK (x,y) <<"K"<<endl;
        break;
        break;
        case 'K':
        cout<<Temperature:: KtoC (x,y) <<"C"<<endl;
        cout<<Temperature:: KtoF (x,y) <<"F"<<endl;
        break;
        break;
        case 'F':
        cout<<Temperature:: FtoC (x,y) <<"C"<<endl;
        cout<<Temperature:: FtoK (x,y) <<"K"<<endl;
        break;
    
    default:
    cout<<"May Allah Bless You"<<endl;
        break;
    }
    return 0;
}