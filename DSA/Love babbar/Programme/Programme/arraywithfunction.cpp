#include <iostream>
using namespace std;

void print(int arr[], int n) //store address of first variable of an array
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void update(int a[])
{
    a[0]=1;
}
int main()
{
    int a[]={3,4,7,8,9};
    print(a,5);//passes adderess of variable
    update(a);
    print(a,5);
    int max_size=sizeof(a)/sizeof(int);//it gives max size of an array 
    cout<<max_size;
    return 0;
}