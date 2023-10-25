#include<iostream>//ajay yadav hello
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n];
    cin>>a;
    cout<<a<<endl;
    int i=0;
    while (a[i]!='\0')
    {
        cout<<a[i];
        i++;
    }
    
    cout<<endl;
    cout<<a[0]<<endl;
    cout<<a[3]<<endl;
    cout<<a[4]<<endl;
    cout<<a[5]<<endl;
    cout<<a[9]<<endl;
    cout<<a[11]<<endl;
    
    return 0;
}
//we cannot take sentence as input in char array because compiler thinks space means next input 