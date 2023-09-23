 #include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b";
    cin>>b;
    //Values before exchanging
    c=a;
    a=b;
    b=c;
    //Values after exchanging
    cout<<"The value of a is after exchange:"<<a<<endl;
    cout<<"The value of b is after exchange:"<<b<<endl;
    return 0;

}