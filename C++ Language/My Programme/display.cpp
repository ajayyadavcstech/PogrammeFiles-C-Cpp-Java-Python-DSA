#include<iostream>
using namespace std;
class mother{
  public:
  void display ()
  {
      cout<<"This is mother class : "<<endl;
  }  
};
class daughter : public mother {
  public:
  void display ()
  {
      cout<<"This is daughter class : "<<endl;
  }  
};
int main()
{
    daughter d;
    d.display();
    
    return 0;
}