//it is stable because in any data duplicasy order of duplicate data not changed  eg. 3(1)    4     5    3(2)    9
//here order is same for both duplicate 3s ....                                       3(1)  3(2)    4     5      9
//by default not adaptive but we can make it using some technique
//here we get useful intermediate result as a highest value
#include<iostream>
using namespace std;

void Bubble_sort(int *a,int n)
{
   for (int  i = 0; i < n-1; i++) //In each pass highest value popped up at last like a bubble....
   {
       cout<<"no of passes "<<i<<endl;
       int check=0;
       for (int  j = 0; j < n-1-i; j++)
       {
           if (a[j+1]<a[j])
           {
               int swap=a[j+1];
               a[j+1]=a[j];
               a[j]=swap;
               check=1;  // here we are making adaptive
           }
           
       }
       if (check==0)
       {
           return;
       }
       
       
   }
   
   
}
void print(int *a,int n) //Traversing an array
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
   int a[]={1,2,3,4,6,5};
    int n=6;
    print(a,n);
    Bubble_sort(a,n);
    print(a,n);

    
    return 0;
}