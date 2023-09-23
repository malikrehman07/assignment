# include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"The value of number is:";
    cin >>number;
    //check number is positive or negative
    if (number>0)
    {cout<<"The number is positive";}
    else if(number<0)
    {cout<<"The number is negative";}
    else
    {cout<<"The number is zero";}

    return 0; 
}