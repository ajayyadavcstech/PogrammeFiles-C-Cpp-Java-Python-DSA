#include<iostream>
using namespace std;

int main()
{
//      cout<<"for loop"<<endl;
//     for(int i=1;i<=5;i++)
//     {
//         cout<<i<<endl;
//     }
//     int i=1;
//      cout<<"while loop"<<endl;

//     while ( i<5)
//     {
//         cout<<i<<endl;
//         i++;
//     }
//      cout<<"do while loop"<<endl;
//      i=1;
//    do{
//        cout<<i<<endl;
//        i++;
//    }while(i>5);
   for(int i=1;i<=30;i++)
   {
       if(i%2==0)
       {continue;//used to skip 
       }
       else
       cout<<i<<endl;
   }
   
   
    
    return 0;
}