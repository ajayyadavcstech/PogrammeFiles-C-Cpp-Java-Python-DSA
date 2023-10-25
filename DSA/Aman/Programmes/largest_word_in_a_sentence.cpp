#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char a[n + 1];
    cin.ignore();
    cin.getline(a, n + 1);
    int ans = 0;
    int start = 0, end = 0;
    int largest = INT32_MIN;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != ' ')
            ans++;
        else
        {
            ans = 0;
        }
        if(ans>largest)
        {
            largest=ans;
            end=i;
        }
    }
    start=end-largest+1;
    cout << largest << endl;
    for (int i = start; i <= end; i++)
    {
        cout<<a[i];
    }
    
}