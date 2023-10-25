#include <iostream>
#include <vector>
using namespace std;
void print(vector<vector<int>> &v){
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}
void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) //square mateix
        {
            if (j > i)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    print(matrix);
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
    print(matrix);
}

int main()
{
    vector<vector<int>> v ={ {1, 2, 3}, {4, 5, 6},{ 7, 8, 9}};
    rotate(v);

    return 0;
}