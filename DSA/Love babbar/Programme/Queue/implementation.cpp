#include <iostream>
using namespace std;

#include <queue>
int main()
{
    queue<int> q;
    q.push(1);
    q.push(3);
    cout << q.size() << endl;
    q.push(8);
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.empty() << endl;
    q.pop();
    cout << q.size() << endl;
    q.pop();
    q.pop();
    cout << q.empty() << endl;

    return 0;
}