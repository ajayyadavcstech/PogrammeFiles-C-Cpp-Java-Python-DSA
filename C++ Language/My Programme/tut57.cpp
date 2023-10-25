#include<iostream>
using namespace std;
class cwh
{
    protected:
    float rating;
    string title;

    public:
    cwh(float ra , string ti)
    {
        rating =ra;
        title=ti;
    }
    virtual void display(){}

};
class cwhvideo : public cwh
{
    float videolength;
    public:
    cwhvideo(float ra, string ti , float vi) : cwh(ra,ti)
    {
       videolength =vi;
    }
    void display()
    {
        cout<<"the title is "<< title<<endl;
        cout<<"the rating is "<< rating<<endl;
        cout<<"the vidio length is "<< videolength<<endl;
    }
};
class cwhtext : public cwh
{
    int  wordcount;
    public:
    cwhtext(float ra, string ti , int  te)  : cwh(ra,ti)
    {
       wordcount=te;
    }
    void display()
    {
        cout<<"the title is "<< title<<endl;
        cout<<"the rating is "<< rating<<endl;
        cout<<"the wordcount is "<< wordcount<<endl;
    }
};
int main()
{
    string title;
    float rating, videolength;
    int wordcount;

    title="hello ajay";
    rating=4;
    videolength=4.5;
    wordcount=44;

    cwhvideo djvideo(rating,title, videolength);
    djvideo.display();

    cout<<endl;
    
    cwhtext djtext(rating,title, wordcount);
    djtext.display(); 

    cwh* tuts[2];
    tuts[0]= &djvideo;
    tuts[1]= &djtext;

    cout<<endl;

    tuts[0]->display(); 
    tuts[1]->display();



    return 0;
}

// Rules of a vertual function 
// 1. They cannot be static
// 2. They are accessed by object pointer
// 3. virtual function can be a friend of another class
// 4. A virtual function in base class might not be used.
// 5. If a virtual finction is defined in a base class , there is a neccesaity of refinding it in the deribed class
