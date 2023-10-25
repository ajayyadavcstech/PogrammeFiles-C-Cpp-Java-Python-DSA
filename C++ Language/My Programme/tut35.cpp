#include<iostream>
using namespace std;
//destructor never takes argument never return value;
int count=0;
class num
{
  public :
  num(){
      count++;
      cout<<"this is a time when constructor is called : "<<count<<endl;

  }
  ~num(){
      cout<<"this is a time when my destructor is called :"<<count<<endl;
      count--;
  }
};
int main()
{
    cout<<"we are inside our main function "<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"entering in a block "<<endl;
        num n2,n3;
        cout<<"block ends "<<endl;

    }
    cout<<"main fuction ended "<<endl;

    
    return 0;
}