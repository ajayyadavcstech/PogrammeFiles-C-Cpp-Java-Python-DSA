#include<iostream>
using namespace std;
#include<vector>
int frogJump(vector<int>& h,int n){
    if(n==1) return 0;
    if(n==2) return abs( h[n-1] - h[n-2]) ;
    int step_1 = abs(h[n-1] - h[n-2]) + frogJump(h,n-1);
    int step_2 = abs(h[n-1] - h[n-3]) + frogJump(h,n-2);
    return min(step_1,step_2); 
}
int main()
{
    vector<int> v ( {30,10,60,10,60,50});
    cout<<"running"<<endl;
    cout<<v.size()<<endl;
    cout<<frogJump(v,v.size());
    

    return 0;
}