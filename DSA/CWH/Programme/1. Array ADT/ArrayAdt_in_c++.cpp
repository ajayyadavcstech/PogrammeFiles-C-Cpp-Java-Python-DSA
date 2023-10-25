#include <iostream>
#include<algorithm>
using namespace std;
class ArrayAdt
{
    public:
    int capacity;
    int size;
    int *arr;

    ArrayAdt(int b[], int size, int capacity)  //constructor
    {
        this->size = size;
        this->capacity = capacity;
        arr = b;
    }
    void display()                           //traversal
    {
        cout << capacity << endl;
        cout << size << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void insert(int index, int element)     //insertion
    {
        if (index>=capacity)
        {
           cout<<"not inserted"<<endl;
           return;
        }
        for (int i = size-1; i >=index; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        size++;
    }
    void delete_index(int index)       //deletion
    {
        if (index>=capacity)
        {
            cout<<"not deleted"<<endl;
            return;
        }
        for (int i = index+1; i < size; i++)
        {
            arr[i-1]=arr[i];
        }
        size--;
    }
    void linear_search(int element)     //searching in O(n)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i]==element)
            {
                cout<<"Element found at index "<<i<<endl;
                return;
            }
            
        }
            cout<<"not found!"<<endl;
        
    }
    void binary_search(int element)    //searching in O(log n)
    {
        int low=0,high=size-1,mid;
        while (low<=high)
        {
            mid=(low+high)/2;
            if (arr[mid]==element)
            {
                cout<<"Element found at index "<<mid<<endl;
                return;
                
            }
            else if (arr[mid]>element)
            {
                high=mid-1;
            }
            else
            low=mid+1;
        }
            cout<<"not found!"<<endl;
        
    }
    void sorting()
    {
      sort(arr,arr+size);
    }
};
int main()
{
    int capacity=100;
    int size=10;
    int arr[capacity]={3,4,7,9,1,2,6,0,8,5};
    ArrayAdt marks(arr,size,capacity);
    marks.display();
    marks.insert(4,11);
    marks.display();
    marks.delete_index(6);
    marks.display();
    marks.linear_search(11);
    marks.sorting();
    marks.display();
    marks.binary_search(6);
    marks.display();
   cout<<&marks.arr[10]<<" "<<(marks.arr+marks.size);
    return 0;
}