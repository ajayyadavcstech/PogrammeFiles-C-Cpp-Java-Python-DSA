 #include<iostream>
 using namespace std;
 bool prime(int n)
 {
     for(int i=2;i<=sqrt(n);i++)
     {
         if(n%2==0)
            return false;
     }
     return true;
 }

 int main()
 {
     int a,b;
     cin>>a>>b;
     for(int i=a;i<=b;i++)
     {
         if(prime(i))
            cout<<i<<endl;
     }
 }
