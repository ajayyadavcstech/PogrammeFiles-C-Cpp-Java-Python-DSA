#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n]={1,2};//it is done only in c++ . here n is variable and in c only constan allowed in array index a[5]; 
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}