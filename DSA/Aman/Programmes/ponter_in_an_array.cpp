#include <iostream>
using namespace std;

int main()
{
    int a[] = {20, 30, 40, 50, 60};
    int *ptr = a;
    cout<<&ptr<<endl;
    cout<<ptr<<endl;
    // cout<<(a=a+1)<<endl;  we cannot modify the location of an array
    // cout<<a++<<endl;  we cannot modify the location of an array
    cout << (a + 1) << endl; //here we are not modifying the address of a pointer we are just printing next address using +1,+2,etc.
    cout << (a) << endl;
    cout << *(a + 1) << endl;
    cout << *(a + 2) << endl;
    cout << *(a + 3) << endl;
    cout << *(a + 4) << endl;
    cout << (ptr) << endl;

    cout << (ptr = ptr + 1) << endl;//her we are updating the value it is pissible because it is not an array so we are free to update any time in a programme
    cout << (ptr++) << endl;//her we are updating the value it is pissible because it is not an array so we are free to update any time in a programme
    cout<<0x61fefc+1<<endl;
   int *pt=a;
   for (int i = 0; i < 5; i++)
   {
       cout<<*(a+i)<<" ";
   }
   cout<<endl;
    for (int i = 0; i < 5; i++)
   {
       cout<<*(pt++)<<" ";
   }
   cout<<endl;
   int b[]={11,22,33,44,55};
   pt=b;
   for (int i = 0; i < 5; i++)
   {
       cout<<*(pt++)<< " ";
   }
   cout<<endl;
   int **p;
//    p=&a; we cannot point array pointer with any other double pointer
   cout<<p<<endl;
   int a1=5,*a2,**a3;
   a2=&a1;
   a3=&a2;
   cout<<"A!A@A#"<<endl;
   cout<<&a1<<endl;
   cout<<a2<<endl;
   cout<<*(a3)<<endl;
   cout<<a1<<endl;
   (*a2)++;
   cout<<a1<<endl;
   (**a3)++;
   cout<<a1<<endl;
  
   
    return 0;
}