#include <iostream>
using namespace std;

class vector
{
    int n = 0;
    int cp = 0;
    int *arr = NULL;

public:
    vector(int *arr, int n)
    {
        this->n = n;
        cp = n * 2;
        this->arr = new int[n * 2];
        for (int i = 0; i < n; i++)
        {
            this->arr[i] = arr[i];
        }
    }
    vector(int n, int val)
    {
        this->n = n;
        arr = new int[n * 2];
        cp = n*2;
        for (int i = 0; i < n; i++)
        {
            arr[i] = val;
        }
    }
    vector()
    {
        arr = NULL;
    }
    void increase(int num)
    {
        int *temp = new int[num];
        for (int i = 0; i < n; i++)
        {
            temp[i] = arr[i];
        }
        delete arr;
        arr = temp;
    }
    void print()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void push_back(int a)
    {
        if (cp < 2 * n)
        {
            increase(2 * n);
            cp = 2 * n;
        }
        arr[n++] = a;
    }
    int size()
    {
        return n;
    }
    int capacity()
    {
        return cp;
    }
    void pop_back()
    {
        n--;
    }
};
int main()
{
    vector v(5,0);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.print();
    v.push_back(5);
    v.push_back(5);
    v.print();
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    return 0;
}