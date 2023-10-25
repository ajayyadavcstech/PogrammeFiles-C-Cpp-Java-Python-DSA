#include<stdio.h>
int linrear_search(int arr[],int size,int n)//We use linear search when array is unsorted or sorted with time complexicity O(n);  
{                                            //Because we are traversing from  0 to n;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==n)
        {
            return i;
        }
        
    }
    return -1;
}

int binary_search(int arr[],int size,int n) // we use binary search when array is sorted** with less time complexicity O(log n);
{
    int low=0,high=size-1,mid;
    while (low<=high)
    {
        mid=(low+high)/2;  //In each case element becomes half so log n ;
        if (arr[mid]==n)
        {
            return mid;
        }
        
        else if (arr[mid]>n)
        {
            high=mid-1;
        }
        else
        low=mid+1;
        
    }
    return -1;
    
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int size=6;
   int check= binary_search(arr,size,2);
   if (check==-1)
   {
       printf("element not found");

   }
   else
   printf("element found at index %d",check);
   

    return 0;
}