#include <iostream>
using namespace std;
#include <vector>
vector<int> h;
int total_step(int ind)
{
    cout<<h[ind]<<endl;
    if(ind<=0) return 0;

    int step_1 = abs(h[ind-1]-h[ind]) + total_step(ind-1);
    int step_2 = INT32_MIN;
    // if(ind-2>=0)
    step_2 = abs(h[ind]-h[ind-2]) + total_step(ind-2);
    return max(step_1,step_2);
}

int main()
{
    int n;
    cin >> n;
    h.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    cout << total_step(n) << endl;

    return 0;
}