//subset {a,b,c}
//   a  b  c
// 0  0  0  0
// 1  0  0  1
// 2  0  1  0
// 3  0  1  1
// 4  1  0  0
// 5  1  0  1
// 6  1  1  0
// 7  1  1  1
//here total 8 posibilities 2^3=8; or (1<<n)
//there are 2^n no. of subset for given element set and n is no of element
#include <iostream>
using namespace std;

void subset(int arr[], int n)
{ 
    for (int i = 0; i < (1<<n); i++) // iterating 0 to n-1 no (0 - 7) // (1<<n) it equals to pow(2,n)
    {
        cout << "{ ";
        for (int j = 0; j < n; j++) //iterating postion in every each binary
        {
            if (((1 << j) & i)) //checking every bit in binary(getbit )
            {
                cout << arr[j] << " "; //printing if bit =1 else skip
            }
        }
        cout << "}" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subset(arr, n);

    return 0;
}