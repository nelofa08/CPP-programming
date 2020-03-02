//Area of a shape using friend fuction//
#include<iostream>
#include<math.h>
using namespace std;

class triangle;
class rectangle
{   int l,w,area1;
public:
    int geta(int l, int w)
    {
        area1=l*w;
        cout<<"Area of rectangle:"<<area1<<endl;
    }
    friend int add(rectangle, triangle);
};

class  triangle
{
    int b, h,area2;
public:
    int geta(int b, int h)
    {
        area2=0.5*b*h;
        cout<<"Area of triangle:"<<area2<<endl;
    }
    friend int add(rectangle, triangle);
};
int add(rectangle r, triangle t)
{
    cout<<"Total Area:"<<r.area1+t.area2<<endl;
}
int main()
{
    int l,w;
    int b,h;
    rectangle ob1;
    triangle ob2;
    cout<<"Enter the length of rectangle:";
    cin>>l;
    cout<<"Enter the width of rectangle:";
    cin>>w;
    cout<<"Enter the base of triangle:";
    cin>>b;
    cout<<"Enter the height of rectangle:";
    cin>>h;
    ob1.geta(l,w);
    ob2.geta(b,h);
    add(ob1, ob2);
    return 0;
}


