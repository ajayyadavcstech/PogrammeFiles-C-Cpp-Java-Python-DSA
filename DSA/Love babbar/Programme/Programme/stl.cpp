#include <iostream>
using namespace std;
#include <array>
#include <vector>
#include <deque>
#include <queue>
#include <stack>

int main()
{
    //Array
    // array<int, 8> a = {1, 2, 3, 4, 5, 6, 7};
    // int n = a.size();
    // cout << "size " << n << endl;
    // cout << "value " << a.at(0) << endl;
    // cout << "value " << a[0] << endl;
    // cout << "value " << a.begin() << endl;
    // cout << "value " << a.begin()+1 << endl;
    // cout << "value " << a.back() << endl;
    // cout << "value " << a.front() << endl;
    // cout << "value " << a.empty() << endl;
    // cout << "value " << a.max_size() << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    //     // }

    //vector
    // vector<int> v;
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(2);
    // v.pop_back();
    // v.pop_back();
    // v.pop_back();
    // v.clear();
    // int n=v.size();
    // cout<<"size "<<n<<endl;
    // cout<<"size "<<v.capacity()<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // cout<<v[n]<<" ";
    // cout<<v[n+1]<<" ";
    // cout<<v[n+2];

    //                      //deque

    // deque<int> d={1,2,3,4,5,6};
    // int n=d.size();
    // cout<<"size "<<n<<endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<d[i]<<" ";
    // }

    //stack
    stack<int> s;
    int n = s.size();
    s.push(4);
    s.push(5);
    s.push(4);

    //queue
    queue<int> q;
    cout << "size " << q.size() << endl;
    q.push(30);
    cout << "size " << q.size() << endl;
    q.push(0);
    q.push(3);
    cout << "size " << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back()<<endl;
    q.pop();
    cout << "size " << q.size() << endl;

    cout << q.front() << endl;
    cout << q.back();

    return 0;
}