#include<iostream>
using namespace std;
int main()
{
    int n,q;
    cin>>n;
    int power_of_sho[n];
    for(int i=0;i<n;i++)
    {
        cin>>power_of_sho[i];
    }
    cin>>q;
    int power_of_bishu[q];
    for(int i=0;i<q;i++)
    {
        cin>>power_of_bishu[i];
    }
    int no_of_kill=0,total_sum=0;
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(power_of_bishu[i]>=power_of_sho[j])
            {
                no_of_kill++;
                total_sum+=power_of_sho[j];
            }
        }
        cout<<no_of_kill<<" "<<total_sum<<endl;
        no_of_kill=0;
        total_sum=0;
    }
}
