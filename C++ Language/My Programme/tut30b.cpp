#include<iostream>
#include<math.h>
using namespace std;
class point 
{
    int x,y;
    public:
friend void cal_dis(point a, point b);

    point(int a,int b)
    {
       x=a;
       y=b;
    }
    void displaypoint()
    {
        cout<<"the point is ( "<<x<<","<<y<<")"<<endl;
    }
};
void cal_dis(point a, point b)
{
    float dis;
    dis=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    cout<<dis;
}
int main()
{
    point p(1,1);
    p.displaypoint();

    point q(3,4);
    q.displaypoint();

    cal_dis(p,q);
    
    return 0;
}