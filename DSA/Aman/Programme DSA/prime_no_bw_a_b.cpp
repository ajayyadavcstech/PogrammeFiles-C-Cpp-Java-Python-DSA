#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a and b" << endl;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int check = 0;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                check = 1;
                break;
            }
        }
        if (check==0 && i!=1)
        {
            cout<<i<<" ";
        }
        
    }

    return 0;
}