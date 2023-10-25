#include<iostream>
using namespace std;

bool search(int arr[][3],int n,int m,int target){
    for(int i=0;i<n;i++)
    {
        for (int  j = 0; j < m; j++)
        {
            if(arr[i][j]==target)
            return true;
        }
        
    }
    return false;
}
void rowsum(int arr[][3],int n,int m){
    int maxi=INT_MIN;
    int ind=-1;
    for (int i = 0; i < n; i++)
    {
        int rowsum=0;
        for (int  j = 0; j < m; j++)
        {
            rowsum+=arr[i][j];
        }
        cout<<rowsum<<" ";
        maxi=max(maxi,rowsum);
        rowsum>maxi?1:ind=i;
    }
    cout<<endl;
    cout<<"maximum value at row "<<ind+1<<" is "<<maxi<<endl;
    

}
int main()
{
    cout<<"running"<<endl;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        

    }
    cout<<"array sum"<<endl;
    rowsum(arr,3,3);
    

    

    return 0;
}