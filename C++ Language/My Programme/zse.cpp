#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,c;
    cin>>n;
    c=n;
  while(n!=0)
  {
      int r;
      r=n%10;
      sum=sum*10+r;
      n=n/10;
  }
  if(c==sum)
  {
      cout<<"no is palindrome";

  }
  else
    cout<<"not a palindrome";
}
