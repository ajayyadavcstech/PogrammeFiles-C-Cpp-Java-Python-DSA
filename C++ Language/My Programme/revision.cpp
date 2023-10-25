#include<iostream>
using namespace std;
class a{
    int a,b;
    protected:
    int d;
    public:
    int c;

    int  sum()
    {
       return a+b+c+d; 
    }
    void set(int a ,int b ,int d)
    {
        this->a=a;
        this->b=b;
        this->d=d;
    }
};
int main()
{
    a a;
    a.c=3;
    a.set(1,2,6);
    cout<<a.sum();

    
    
    return 0;
}