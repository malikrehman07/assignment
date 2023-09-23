#include <iostream>
using namespace std;
int main(){
float  miles, kilometers;
cout<<"Enter the distance in miles:";
cin>> miles;

kilometers = miles * 1.609;
cout << miles << " miles is equal to " <<kilometers << " kilometers."<< endl;
return 0 ;
}