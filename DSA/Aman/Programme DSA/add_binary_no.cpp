#include <iostream>
using namespace std;

string add(int a, int b)
{
    string ans = "";
    int carry = 0;
    while (a > 0 && b > 0)
    {
        int a_last = a % 10;
        int b_last = b % 10;
        int sum = a_last + b_last + carry;
        int quotient = sum / 2;
        int remainder = sum % 2;
        ans += to_string(remainder);
        carry = quotient;
        a /= 10;
        b /= 10;
    }
    while (a > 0)
    {
        int a_last = a % 10;
        int sum = a_last + carry;
        int quotient = sum / 2;
        int remainder = sum % 2;
        ans += to_string(remainder);
        carry = quotient;
        a /= 10;
    }
    while (b > 0)
    {
        int b_last = b % 10;
        int sum = b_last + carry;
        int quotient = sum / 2;
        int remainder = sum % 2;
        ans += to_string(remainder);
        carry = quotient;
        b /= 10;
    }
    if (carry == 1)
    {
        ans += to_string(carry);
    }
    int i=0;
    int j=ans.size()-1;
    while (i<j)
    {
        char temp=ans[i];
        ans[i]=ans[j];
        ans[j]=temp;
        i++;
        j--;

    }
    
    return ans;
    
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<add(a,b);

    return 0;
}