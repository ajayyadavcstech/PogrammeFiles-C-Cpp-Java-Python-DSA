#include <iostream>
using namespace std;

int main()
{
char c='a';
char *p=&c;
cout<<c<<endl;
cout<<p<<endl;
string n="ajay";
cout<<n<<endl;
cout<<(int *)&n[1]<<endl;
string st1="hello";
char s2[20]="ajju bhai";
char s1[20]="ajay yadadv";
char *ptr=&s1[0];
string st2=" bsdk";
cout<<"lets check s2"<<endl;

for (int i = 0; s2[i]!='\0'; i++)
{
    cout<<(void *)&s2[i]<<endl;
}
cout<<"lets check s1"<<endl;
for (int i = 0; s1[i]!='\0'; i++)
{
    cout<<(void *)&s1[i]<<endl;
}
cout<<"lets check st1"<<endl;
for (int i = 0; i<st1.size(); i++)
{
    cout<<(void *)&st1[i]<<endl;
}
cout<<"lets check st2"<<endl;
for (int i = 0; st2[i]!='\0'; i++)
{
    cout<<(void *)&st2[i]<<endl;
}
st1=st1+st2;
cout<<"lets check st1 after append"<<endl;
for (int i = 0; st1[i]!='\0'; i++)
{
    cout<<st1[i];
}





    return 0;
}