#include <iostream>
#include <vector>
using namespace std;

pair<int,int> binarysearch2darray(vector<vector<int>> v,int target)
{
    int s = 0;
    int e = v.size() * v[0].size() - 1; //row*col-1
    pair<int,int> ind(-1,-1);
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int row = mid / v[0].size(); //row =mid/colwidth
        int col = mid % v[0].size();    //col=mid%colwidth
        if (v[row][col] == target)
        {
            ind.first=row;
            ind.second=col;
            return ind;
        }
        else if (v[row][col] > target)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return ind;
}
int main()
{
    vector<vector<int>> v={{1,3}};
    pair<int,int> ind;
    ind=binarysearch2darray(v,3);
    if (ind.first==-1)
    {
        cout<<"target not found";
    }
    else
    cout<<"i "<<ind.first<<endl<<"j "<<ind.second;

    

    return 0;
}