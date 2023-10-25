#include <iostream>
using namespace std;
void phonedigit(string a, string b)
{
   static const string c=b;
    if (a.length() == 0 && b.length() == 0)
        return;

    if (b.length() == 0)
    {
        phonedigit(a.substr(1), c);
        return;
    }
    if (a.length()!=0)
    {
          
    cout << a[0] << b[0] << endl;
    phonedigit(a, b.substr(1)); 
    }
 
}
int main()
{
    string phone[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int i, j;
    cout << "Enter digit" << endl;
    cin >> i >> j;
    phonedigit(phone[i], phone[j]);
    return 0;
}