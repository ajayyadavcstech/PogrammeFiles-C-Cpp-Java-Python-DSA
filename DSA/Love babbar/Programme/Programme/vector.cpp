#include<iostream>
#include<vector>
using namespace std;
void findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector <int > a;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            if(arr1[i]==arr2[j])
            {
                a.push_back(arr1[i]);
                arr2[j]=-arr2[j];
            }
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<< " ";
    }
    
}

int main()
{
    vector <int > a,b;
    a={4,5,6,6,8};
    b={2,3,5,6,9,10};
    findArrayIntersection(a,5,b,7);
    

    return 0;
}