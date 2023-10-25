#include <iostream>
using namespace std;

int countprime(int n)
{
    int arr[n] = {0};
    for (int i = 2; i < n; i++)
    {
        if (arr[i] == 0)
        {
            int j = i * 2;
            while (j < n)
            {
                arr[j] = -1;
                j += i;
            }
        }
    }
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    cout<<"Enter n ";
    int n;
    cin>>n;
    cout<<countprime(n);

    return 0;
}