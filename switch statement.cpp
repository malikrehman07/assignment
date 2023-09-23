 #include <iostream>
using namespace std;
int main()
{
    char character;
    cout<<"enter a character";
    cin >>character;
    switch(character)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        cout<<character<< "  is vowel"<<endl;
        break;
        default:
        cout<<character<<"  is constant";
        return 0;


    }
}