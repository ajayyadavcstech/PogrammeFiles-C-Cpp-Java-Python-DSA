#include <iostream>
using namespace std;

int main()
{
    // ---------- using static memory creating jaggered array -------------

    // int row0[2] = {1, 2};       //first row   :  row mapped with oth elemetn
    // int row1[4] = {3, 4, 5, 6}; //second row  :
    // int rowsize[2] = {2, 4};    //size of each row
    // int *p[] = {row0, row1};    //array of pointer and contain int array : mapped with oth address

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < rowsize[i]; j++)
    //     {
    //         cout << p[i][j] << " ";
    //     }

    //     cout << endl;
    // }

    //-----------using dynameic memory creating jaggerd array ---------------

    int **p = new int *[5];
    int rowsize[5] = {3, 5, 2, 1, 2};

    for (int i = 0; i < 5; i++)
    {
        p[i] = new int[rowsize[i]];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < rowsize[i]; j++)
        {
            cin >> p[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < rowsize[i]; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    //deallocating memory
    for (int i = 0; i < 5; i++)
    {
        delete[] p[i];
    }
    delete[] p;

    return 0;
}