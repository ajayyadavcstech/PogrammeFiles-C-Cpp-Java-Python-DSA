#include <iostream>
using namespace std;

int main()
{
    cout << "This is a character array"
         << " Enter character" << endl;
    char arr[55];
    cin.getline(arr, 55);
    cout << arr;

    cout << "This is a string"
         << " Enter character" << endl;
    string str;
    getline(cin, str);
    cout << str;

    return 0;
}