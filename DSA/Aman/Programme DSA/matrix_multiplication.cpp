#include <iostream>
using namespace std;

int main()
{
    int n, m, p;
    cout << "Enter size of matrices" << endl;
    cin >> n >> m >> p;
    int a1[n][m];
    int a2[m][p];
    cout << "Enter first matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a1[i][j];
        }
    }
    cout << "Enter second matrix" << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> a2[i][j];
        }
    }
    int ans[n][p];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            ans[i][j]=0;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < m; k++)
            {
                ans[i][j]+= (a1[i][k] * a2[k][j]);
            }
        }
    }
    cout<<"Multoplication of two matrces is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}