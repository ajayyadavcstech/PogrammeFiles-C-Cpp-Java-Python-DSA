//it is not stable 
//it has intermediate result as minimum value
//it is also not adobtive 
// ther is less swapping
#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int index=i;
        for (int j = i+1; j <n; j++)
        {
            if (arr[j]<arr[index])
            {
                index=j;
            }
            
        }
        int swap=arr[i];
       arr[i]=arr[index];
       arr[index]=swap;
        
    }
    
}
void traversal(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int arr[]={2,6,3,4,7};
    traversal(arr,5);
    selection_sort(arr,5);
    traversal(arr,5);
    return 0;
}