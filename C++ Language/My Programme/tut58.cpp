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
    virtual void display()=0;  //do nothin function  ------>pure vertual class

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