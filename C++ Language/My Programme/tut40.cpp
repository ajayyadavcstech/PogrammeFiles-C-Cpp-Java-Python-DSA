#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_no(int a);
    void get_no();
};
void student ::set_no(int a)
{
    roll_no = a;
}
void student ::get_no()
{
    cout << "the roll no is " << roll_no << endl;
}
class exam : public student
{
protected:
    float math;
    float phy;
    public:
    void set_marks(float a, float b);
    void get_marks();
};
void exam ::set_marks(float a, float b) 
{
    math = a;
    phy = b;
}
void exam ::get_marks()
{
    cout << "the marks of maths is " << math << endl;
    cout << "the marks of physics is " << phy << endl;
}
class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_no();
        get_marks();

        cout << "percentage is " << (math + phy)/ 2 << "%"<<endl;
    }
};

int main()
{
    result ajay;
    ajay.set_no(34);
    ajay.set_marks(90.9,99.7); 
    ajay.display();
    
    return 0;
}