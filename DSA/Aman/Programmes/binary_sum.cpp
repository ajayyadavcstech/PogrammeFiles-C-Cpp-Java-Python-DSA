#include<bits/stdc++.h>
using namespace std;
string BinaryToDecimal(int a, int b)
{
    int previouscarry = 0;
    string ans ="";
    while(a>0 && b>0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            if (previouscarry == 0)
                ans.push_back('0');
            else
                 ans.push_back('1');
        }
        else if (a % 2 == 1 && b % 2 == 0 || a % 2 == 0 && b % 2 == 1)
        {
            if (previouscarry == 0)
                 ans.push_back('1');
            else
            {
                ans.push_back('0');
                previouscarry = 1;
            }
        }
        else
        {
            if (previouscarry == 0)
            {
                 ans.push_back('0');
                previouscarry = 1;
            }
            else
            {
                ans.push_back('1');
                previouscarry = 1;
            }
        }
        a/=10;
        b/=10;
    }
    if(a>0)
    {
      while (a>0)
      {
          int lastdigit=a%10;
          if(lastdigit==0)
          {
              if(previouscarry==0)
              {
                  ans.push_back('0');
              }
              else
              {
                  ans.push_back('1');
              }
          }
          else
          {
             if(previouscarry==0)
             {
                 ans.push_back('1');
             }
             else
             {
                 ans.push_back('0');
                 previouscarry=1;
             }
          }
          a/=10;
      }
      
    }
     if(b>0)
    {
      while (b>0)
      {
          int lastdigit=b%10;
          if(lastdigit==0)
          {
              if(previouscarry==0)
              {
                  ans.push_back('0');
              }
              else
              {
                  ans.push_back('1');
              }
          }
          else
          {
             if(previouscarry==0)
             {
                 ans.push_back('1');
             }
             else
             {
                 ans.push_back('0');
                 previouscarry=1;
             }
          }
          b/=10;
      }
      
    }
    if(previouscarry==1)
    {
        ans.push_back('1');
    }
 reverse(ans.begin(),ans.end());  
 return ans;
    
}
int main()
{
    cout<<"Enter the value of a and b  : "<<endl;
    int a, b;
    cin >> a >> b;
    cout << BinaryToDecimal(a, b);
    return 0;
}