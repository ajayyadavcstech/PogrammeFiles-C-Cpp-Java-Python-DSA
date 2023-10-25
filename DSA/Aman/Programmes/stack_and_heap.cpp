#include<iostream>
using namespace std;

int main()
{
  int a=5;
  int arr[4]={10,20,30,40};
  int b=6;
  cout<<&arr<<endl;
  cout<<&arr[0]<<endl;
  cout<<&arr[1]<<endl;
  cout<<&arr[2]<<endl;
  cout<<&arr[3]<<endl;
  cout<<&b<<endl;
  int *ar=new int [4];
  cout<<&ar<<endl;
  cout<<ar<<endl;
  cout<<&ar[0]<<endl;
  for (int  i = 0; i < 4; i++)
  {
      *(ar+i)=10+i;
  }   
   for (int  i = 0; i < 4; i++)
  {
      cout<<*(ar+i)<<endl;
  }
  delete []ar;
     for (int  i = 0; i < 4; i++)
  {
      cout<<*(ar+i)<<endl;
  }
  cout<<ar<<endl; //after deleting array till now pointer pointing to the same location in heap this is called dangling pointer
  ar=NULL;
  cout<<"After null "<<ar<<endl;


//    for (int i = 0; i < 4; i++)
//   {
//       cout<<*(arr+i)<<endl;
//   }
//   for (int i = 0; i < 4; i++)
//   {
//       *(arr+i)=10;
//   }
//   for (int i = 0; i < 4; i++)
//   {
//       cout<<*(arr+i)<<endl;
//   }
//   delete []arr;
//   cout<<"After deleting : "<<endl;

//    for (int i = 0; i < 4; i++)
//   {
//       cout<<*(arr+i)<<endl;
//   }
  


    

    return 0;
}