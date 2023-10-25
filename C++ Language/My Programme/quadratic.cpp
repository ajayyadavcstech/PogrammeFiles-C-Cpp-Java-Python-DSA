#include<iostream>
#include<math.h>
using namespace std;
class quadratic{
    float a,b,c,d,root1,root2;
    public:
    quadratic(float a,float b,float c)
    {
        this->a=a;
        this->b=b;
        this->c=c;

    }
    void discriminant()
    {
        d=b*b-4*a*c;
        if(d>=0){
        cout<<"roots are real"<<endl;

        cout<<"descriminant is "<<d<<endl;

        }
        else
        cout<<"roots are imaginary"<<endl;
    }
    void roots()
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        cout<<"both roots are "<<root1<<"  "<<root2<<endl;
    }

};
int main()
{
    float a,b,c;
    cout<<"enter the value of a,b and c : "<<endl;
    cin>>a>>b>>c;
    quadratic q1(a,b,c);
    q1.discriminant();
    q1.roots();

    
    return 0;
}