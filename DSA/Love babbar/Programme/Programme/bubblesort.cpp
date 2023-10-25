#include<iostream>
using namespace std;
#include<vector>
void bubbleSort(vector<int>& arr, int n)
{   
    int no_of_swap=0;
    // Write your code here.
    for(int i=0;i<n-1;i++){//no of round
    int sorted=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                no_of_swap++;
                swap(arr[j],arr[j+1]);
                sorted=1;
            }
        }
        if(sorted==0){
            cout<<no_of_swap;
            return;
        }
    }
    cout<<no_of_swap;
}


int main()
{
    vector<int> arr={ 8, 22, 7, 9, 31, 5, 13};
    bubbleSort(arr,7);
    

    return 0;
}