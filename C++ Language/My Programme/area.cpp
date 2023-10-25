#include <iostream>
using namespace std;
class shape
{
protected:
    float width, height;

public:
    shape(float a, float b) : width(a), height(b) {}
};
class triangle : public shape
{
public:
    triangle(float a, float b) : shape(a, b)
    {
    }
    float area()
    {
        return ((1.0 / 2) * width * height);
    }
};
class rectangle : public shape
{
public:
    rectangle(float a, float b) : shape(a, b)
    {
    }

    float area()
    {
        return width * height;
    }
};
int main()
{
    triangle t(3, 4);
    rectangle r(4, 6);
    cout << t.area() << endl;
    cout << r.area() << endl;

    return 0;
}