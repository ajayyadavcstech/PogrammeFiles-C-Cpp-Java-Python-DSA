#include <iostream>
#include <list>
using namespace std;
void display(list<int> &list1)
{
    list<int>::iterator itr;
    for (itr = list1.begin(); itr != list1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1; // list of 0 length
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(9);
    list1.push_back(7);
    list1.push_back(6);
    display(list1);

    // list1.remove(9);
    // display(list1);

    // list1.pop_back(); 
    // display(list1);

    // list1.pop_front();
    // display(list1);

    list<int> list2(3); //empty list of size 3
    list<int> :: iterator iter=list2.begin();
    *iter=1;
    iter++;
    *iter=66;
    iter++;
    *iter=77;
    display(list2);

    list1.sort();
    list2.sort();
    list1.merge(list2);
    display(list1);

    list1.reverse();
    display(list1);


    return 0;
}