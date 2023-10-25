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
        if (front[k] == -1)
        {
            front[k] = cur;
            back[k] = cur;
            arr[cur] = data;
            cur = next[cur];
            next[back[k]] = -1;
            return;
        }
        arr[cur] = data;
        next[back[k]] = cur;
        back[k] = cur;
        cur = next[cur];
        back[back[k]] = -1;
        return;
    }
    void deque(int k)
    {
        if(front[k]==-1){
            cout<<"Queue is empty "<<endl;
            return ;
        }
        if(front[k]==back[k]){
            front[k]=-1;
            back[k]=-1;
        }
        
        front[k]=next[front[k]];
        
    }
    bool empty(int k){
        if(front[k]==-1){
            return true;
        }
        return false;
    }
    int frontvalue(int k){
        return arr[front[k]];
    }
    int backvalue(int k){
        return arr[back[k]];
    }
};

int main()
{
    kqueue q(5,2);
    q.enque(0,4);
    q.enque(0,6);
    q.enque(0,7);
    q.enque(0,8);
    q.enque(0,9);
    // cout<<q.frontvalue(0)<<endl;
    // cout<<q.backvalue(0)<<endl;
    q.deque(0);
    // q.deque(1);