# include <iostream>
using namespace std;
int main()
{
    int number,table;
    cout<<"Enter the value of number:";
    cin>>number;
    for(table=1;table<11;table++)
    {
        cout<<number<<"x"<<table<<"="<<number*table<<endl;
    }
    return 0;
}