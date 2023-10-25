#include<iostream>
using namespace std;

string removeDuplicates(string s) {
        int i=0;
        int n=s.size();
        while(i < n-1)
        {
            if(s[i] == s[i+1])
            {
                s.erase(i,2);
                if(i>0) i--;
                n-=2;
                continue;
            }
            else i++;
            n=s.size();
        }
        return s;
    }
int main()
{
    cout<<"running...";
    string n="aaaaaa";
    n=removeDuplicates(n);
    for(int i=0;i<n.length();i++){
        cout<<n[i]<<" ";
    }

    

    return 0;
}