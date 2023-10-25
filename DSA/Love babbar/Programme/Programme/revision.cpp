#include<iostream>
#include<vector>
using namespace std;
 int pivot(vector<int>arr)
    {
        //using binary search to find povot in log(n)
        int s=0;
        int e=arr.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]<=arr[0] && arr[mid]<=arr[arr.size()-1]){
                return mid;
            }
            else if(arr[mid]>=arr[0]){
                s=mid+1;
            }
            else
                e=mid-1;
        }
        return -1;
    }

int main()
{
    vector<int> arr={4,1,3};
    cout<<pivot(arr);

    return 0;
}