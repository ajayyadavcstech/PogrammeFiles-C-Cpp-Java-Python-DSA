#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void presmaller(vector<int> &pre, vector<int> &heights)
{
    stack<int> s;
    s.push(-1);
    for (int i = 0; i < pre.size(); i++)
    {
        while (s.top()!=-1 && heights[s.top()] >= heights[i])
        {
            s.pop();
        }
        pre[i] = s.top();
        s.push(i);
    }
}
void nextsmaller(vector<int> &next, vector<int> &heights)
{
    stack<int> s;
    s.push(-1);
    for (int i = heights.size() - 1; i >= 0; i--)
    {
        while (s.top()!=-1 && heights[s.top()] >= heights[i])
        {
            s.pop();
        }
        if(s.top()==-1){
                next[i]=heights.size();
            }
            else
            next[i]=s.top();
        s.push(i);
    }
}
int main()
{
    vector<int> v = {2,4};

    vector<int> pre(v.size());
    vector<int> next(v.size());

    presmaller(pre, v);
    nextsmaller(next, v);
    cout << "pre : ";
    for (int i = 0; i < pre.size(); i++)
    {
        cout << pre[i] << " ";
    }
    cout << endl;
    cout << "next : ";
    for (int i = 0; i < next.size(); i++)
    {
        cout << next[i] << " ";
    }
    cout << endl;

    int area = -1;

    for (int i = 0; i < v.size(); i++)
    {
        int temparea = 0;
        int l;
        int b;
        l = v[i];
        b = next[i] - pre[i] - 1; // {2, 1, 5, 6, 2, 3};
        temparea = l * b;
        cout << temparea << " ";
        area = max(area, temparea);
    }
    cout << endl;
    cout << area << endl;

    return 0;
}