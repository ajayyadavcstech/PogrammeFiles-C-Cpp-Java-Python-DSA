#include<iostream>
#pragma pack(1)  //to avoid padding in structure
using namespace std;

struct Node
{
    char a;
    int data;
    struct Node * next;
};
struct traversal
{
    long int a;
    char b;
    int c;
};
struct traversals
{
    char aa[1];       // 1 byte + 3 byte padding to complete  4 byte of memory (comes under memory management)
    short int aaa;
    int data;      //4 byte
    traversals *a;  //4 byte
};

int main()
{
    Node * head[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<&head[i]<<" "<<sizeof(head[i])<<"   ";//pointer is independent of data type it only takes int size space because it only store the address of a data type;
    }
    cout<<endl;
    Node head1[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<sizeof(head1[i])<<" "; 
    }
    cout<<endl;
    cout<<sizeof(head1->a)<<endl;
    cout<<sizeof(head1->data)<<endl;
    cout<<sizeof(head1->next)<<endl;
    Node n1;
    cout<<sizeof(n1)<<endl;
    
   cout<<"size of traversal"<<endl;
   traversal t;
   cout<<sizeof(t);


    return 0;
}