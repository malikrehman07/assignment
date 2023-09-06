# include <iostream>
#include <typeinfo> 
using namespace std;
int main(){
    int marks = 48;
    char name[] = "Abdul Rehman";
    float average = 48.9;
    cout<< "the data type of marks is "<< typeid(marks).name() << endl;
    cout<< "the data type of name is "<< typeid(name).name() << endl;
    cout<< "the data type of average is "<< typeid(average).name() << endl;
return 0;
}