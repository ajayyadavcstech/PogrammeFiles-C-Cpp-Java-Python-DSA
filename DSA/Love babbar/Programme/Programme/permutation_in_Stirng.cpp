#include<iostream>
using namespace std;

 bool isequal(int arr1[],int arr2[]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(int i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        for(int i=0;i<s2.length()-s1.length()+1;i++){
            int count2[26]={0};
            for(int j=i;j<i+s1.length();j++){
                int index=s2[j]-'a';
                count2[index]++;
            }
            if(isequal(count1,count2)){
                return true;
            }
            
        }
        return false;
    }
int main()
{
    string s1="ab";
    string s2="eidbaooo";
    cout<<checkInclusion(s1,s2);
    

    return 0;
}