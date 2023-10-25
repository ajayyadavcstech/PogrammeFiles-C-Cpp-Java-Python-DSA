#include<iostream>
using namespace std;
class  student //vertual base class ;
{
   protected : 
   int roll_no;
   public :
   void set_no(int a)
   {
      roll_no=a;
   }
   void print_no()
   {
       cout<<"the roll no id " <<roll_no<<endl;
   }

};

class test : virtual public student  // vertually derived from student class
{
   protected :
   int maths , phy;
   public:
   void set_marks(float a ,float b)
   {
       maths =a;
       phy=b;
   }
      void print_marks()
   {
       cout<<"maths marks is  " <<maths<<endl;
       cout<<"phy marks is  " <<phy<<endl;
   }
};

class sports : virtual public student // vertually derived from student class
{
   protected :
   float score;
   public:
   void set_score(float a)
{
    score=a;
}
void print_score()
{
    cout<<"my pi score is "<< score<<endl;
}
};

class result : public test , public sports  // derived from test and sport class
{
    protected:
    float  total;
    public: 
    void display()
    {
        total=maths+phy+score;
        print_no();
        print_marks();
        print_score();
        cout<<"total marks is " <<total<<endl;
    }
};
int main()
{
    result ajay;
    ajay.set_no(33);
    ajay.set_marks(44,78);
    ajay.set_score(9); 
    ajay.display(); 
    
    return 0;
}