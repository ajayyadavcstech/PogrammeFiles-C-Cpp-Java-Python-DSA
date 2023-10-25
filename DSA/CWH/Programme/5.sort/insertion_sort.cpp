// In insertion sort array is divided into two parts first element is always sorted second rest always unsorted and we pick up one element from unsorted array one by one and place in sorted array
// it is adaptive(if array is sorted then it always takes O(N) time) in nature 
// it is stable
//thre is no intermediate result
#include <iostream>
using namespace std;
void insertion_sort(int *arr,int n)
{
   for (int i = 1; i < n; i++)
   {
           int a=arr[i];

       for (int j = i-1; j >=0; j--)
       {
           if (arr[j]>a)
           {
               arr[j+1]=arr[j];
           }
           else{
              arr[j+1]=a;
              break;
           }
           
       }
       
   }
   
}
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5] = {2, 4, 7, 5,8};
    int n = 5;
    print(arr, n);
    insertion_sort(arr, n);
    print(arr, n);
    return 0;
}