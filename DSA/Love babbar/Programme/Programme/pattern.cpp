#include <iostream>
using namespace std;
void pattern()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i + j - 1 << " ";
        }
        cout << endl;
    }
}
void pattern1()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int j = i;
        while (j >= 1)
        {
            cout << j-- << " ";
        }
        cout << endl;
    }
}
void pattern2()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }
}
void pattern3()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
}
void pattern4()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char('A' + i - 1) << " ";
        }
        cout << endl;
    }
}
void pattern5()
{
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}
void pattern6()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char('A' + i - 1 + j - 1) << " ";
        }
        cout << endl;
    }
}
void pattern7()
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << char('A' + i - 1 + j - 1) << " ";
        }
        cout << endl;
    }
}
void pattern8()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<char('A'+n-i+j-1)<<" ";
        }
        cout<<endl;
    }
}
void pattern9(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=n-i+1;j<=n;j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}
void pattern10(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        for(int j=i-1;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern11(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j<<" ";
        }
        for(int j=n-i+2;j<=n;j++)
        {
            cout<<"* ";
        }
        for(int j=1;j<=i-1;j++)
        {
            cout<<"* ";
        }
        for(int j=n-i+1;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    cout << "Enter n" << endl;
    pattern11();

    return 0;
}