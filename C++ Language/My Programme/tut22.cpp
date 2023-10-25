#include <iostream>
using namespace std;
class binary
{
private:
    string b;

public:
    void getbin();
    void checkbin();
    void ones();
    void display();
};
void binary ::getbin()
{
    cout << "enter the value of binary " << endl;
    cin >> b;
}

void binary ::checkbin()
{
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] != '0' && b[i] != '1')
        {
            cout << "incorrect binary formate" << endl; /* code */
            exit(0);
        }
    }
    cout << "it is a binary formate" << endl;
}
void binary ::ones()
{
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == '0')
        {
            b[i] = '1';
        }
        else
        {
            b[i] ='0';
        }
    }
}
void binary :: display()
{
    for (int i = 0; i < b.length(); i++)
    {
        cout<<b[i];
    }
    
}

int main()
{
    binary a;
    a.getbin();
    a.checkbin();
    a.ones();
    a.display();
    return 0;
}