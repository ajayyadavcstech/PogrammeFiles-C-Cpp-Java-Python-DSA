#include<iostream>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
        int count[26]={0};
        
        for(int i=0;i<chars.size();i++){
            int ind=chars[i]-'a';
            count[ind]++;
        }
        chars.clear();
        for(int i=0;i<26;i++){
            if(count[i]==1){
                chars.push_back(i+'a');
            }
            else if(count[i]>1){
                chars.push_back(i+'a');
                vector<char> temp=vector<char>(count[i]);
                chars.insert(chars.end(),temp.begin(),temp.end());
            }
        }
        return chars.size();
    }
int main()
{
    vector<char> ch={'a','a','b','b','c','c','c'};
    cout<<compress(ch)<<endl;
    for(int i=0;i<ch.size();i++){
        cout<<ch[i]<<"";
    }
    

    return 0;
}