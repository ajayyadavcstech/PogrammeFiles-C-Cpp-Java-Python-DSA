#include <iostream>
using namespace std;

void fibo(int n)
{
    int first = 0;
    int second = 1;
    for (int i = 1; i <= n; i++)
    {
        int next = first + second;

        cout << first<<" ";
        first = second;
        second =next;
    }
}

int main()
{
    fibo(10);

    return 0;
}