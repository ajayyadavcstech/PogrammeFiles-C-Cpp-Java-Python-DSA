//in count array we have to make a different array of max size in array
//time complexicity is O(n) but it takes extra space s
#include <iostream>
using namespace std;
void count_sort(int *a, int n)
{
    int maxi = INT32_MIN; 
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]); //searching for maximum value in an array here 9
    }
    int b[maxi+1];   //creating array of size maxi+1 because if we use b[maxi] then it only create array from o to maxi-1  
    for (int i = 0; i < maxi; i++)
    {
        b[i] = 0;  // set each value to 0
    }
    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;  // increamenting the value of an array b (which is initially initialize to 0) at only particular index where index of b[i] ,i=value at an array a
                    // value of an array b[] at any index indicate the no of types the index value repeated in main array(a[])
    }
    int i = 0; //counter for array b[]
    int j = 0;//counter for array a[]
    while (i < maxi) // traversing to the maximum value 
    {
        if (b[i] != 0) // checking for value at index is 0 or not
        {
            a[j++] = i; //copy all value from array b[] to array a[]
            b[i]--;
        }
        else
            i++;
    }
}
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {3, 2, 6, 1, 8, 3, 9};
    int n = 7;
    print(arr,n);
    count_sort(arr,n);
    print(arr,n);

    return 0;
}