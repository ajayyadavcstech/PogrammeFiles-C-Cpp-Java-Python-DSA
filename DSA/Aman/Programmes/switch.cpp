#include<iostream>
using namespace std;

int main()
{
    char button;
    cin>>button;
    switch(button)
    {
        case 'a':
        cout<<"hello:";
        break;
        case 'b':
        cout<<"namaste:";
        break;
        case 'c':
        cout<<"hola:";
        break;
        case 'd':
        cout<<"salute:";
        break;
        default:
        cout<<"I am still learning more";
    }
    return 0;
}