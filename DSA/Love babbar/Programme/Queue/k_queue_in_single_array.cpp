#include <iostream>
using namespace std;
class kqueue
{
private:
    int *arr;
    int *front;
    int *back;
    int cur;
    int *next;

public:
    kqueue(int n, int k)
    {
        arr = new int[n];
        front = new int[k];
        back = new int[k];
        cur = 0;
        next = new int[n];

        for (int i = 0; i < n - 1; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            back[i] = -1;
        }
    }

    void enque(int k, int data)
    {
        if (cur == -1)
        {
            cout << "Queue is full " << endl;
            return;
        }
        if (front[k] == -1 && back[k]==-1)
        {
            arr[cur] = data;
            front[k] = cur;
            back[k] = cur;
            cur = next[cur];
            next[back[k]] = -1;
            return;
        }
        arr[cur] = data;
        next[back[k]] = cur;
        back[k] = cur;
        cur = next[cur];
        next[back[k]] = -1;
        return;
    }
    void deque(int k)
    {
        if(front[k]==-1 && back[k]==-1){
            cout<<"Queue is empty "<<endl;
            return ;
        }
        if(front[k]==back[k]){
            next[back[k]]=cur;
            cur=back[k];
            front[k]=-1;
            back[k]=-1;
             return ;
        }
        int i=front[k];
        front[k]=next[front[k]];
        next[i]=cur;
        cur=i;
        
    }
    bool empty(int k){
        if(front[k]==-1){
            return true;
        }
        return false;
    }
    int frontvalue(int k){
        if(front[k]==-1){
            cout<< "Queue is empty"<<endl;
            return -1;
        }
        return arr[front[k]];
    }
    int backvalue(int k){
        if(back[k]==-1){
            cout<< "Queue is empty"<<endl;
            return -1;
        }
        return arr[back[k]];
    }
};

int main()
{
    kqueue q(5,2);
    q.enque(0,3);
    q.enque(0,4);
    q.enque(0,5);
    q.enque(0,6);
    q.enque(0,7);
    cout<<"front value "<<q.frontvalue(0)<<endl;
    cout<<"back value "<<q.backvalue(0)<<endl;
    // q.enque(0,6);
    q.deque(0);
    cout<<"front value "<<q.frontvalue(0)<<endl;
    cout<<"back value "<<q.backvalue(0)<<endl;
    // cout<<q.empty(0)<<endl;
    // cout<<q.empty(1)<<endl;
    q.enque(0,1);
    cout<<"front value "<<q.frontvalue(0)<<endl;
    cout<<"back value "<<q.backvalue(0)<<endl;
    q.enque(0,9);
    q.deque(0);
    q.deque(0);
    q.deque(0);
    q.enque(1,9);
    q.enque(1,5);
    q.enque(1,6);
    q.enque(1,1);

    cout<<"front value 1:  "<<q.frontvalue(1)<<endl;
    cout<<"back value 1 : "<<q.backvalue(1)<<endl;

    return 0;
}