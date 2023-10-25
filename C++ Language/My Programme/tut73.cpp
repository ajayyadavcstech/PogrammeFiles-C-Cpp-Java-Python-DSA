#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    map<string,int> marksmap;
    marksmap["ajay"]=66;
    marksmap["ajeet"]=65;
    marksmap["ankita"]=56;
    marksmap["aman"]=36;
    map<string,int> :: iterator iter;
    for ( iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"The size is " <<marksmap.size()<<endl;
    cout<<"The maxsize is : " <<marksmap.max_size()<<endl;
    cout<<"The empty retun value is : " << marksmap.empty()<<endl;
    
    
    return 0;
}