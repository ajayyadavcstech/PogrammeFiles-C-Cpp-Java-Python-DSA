#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "hi hallo";
    int x = 1;
    for (int i = 0; i < str.size() + 1; i++)
    {
        if (str[i] == '\0')
           { 
        cout << "found ";
               x = 0;
        }
    }
    if (x == 0)
        cout << "found ";
    else
        cout << "Not found";

    return 0;
}