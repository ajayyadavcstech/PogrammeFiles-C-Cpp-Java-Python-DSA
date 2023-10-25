#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter the size ";
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cout<<"Enter the sentence"<<endl;
    cin.getline(a,n);
    int ans = INT_MIN;
    int cur_ans=0;
    int s=0;
    for (int i = 0; a[i] != '\0'; i++)
    {

        if (a[i] == ' ')
        {
            cur_ans = 0;
            continue;
        }
        cur_ans++;
        if (cur_ans>ans)
        {
            ans=cur_ans;
            s=i-ans+1;
        }
        
    }
    cout<<ans<<endl;
    for (int i = s; i < s+ans; i++)
    {
        cout<<a[i];
    }
    
    return 0;
}