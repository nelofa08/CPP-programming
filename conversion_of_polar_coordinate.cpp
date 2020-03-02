#include<iostream>
#include<math.h>
#define z 3.1416/180
using namespace std;

class convert
{
    double r,x,y,t;
public:
    void polar(double rz,double tz)
    {
        r=rz;
        t=tz;
    }
    void cartesian()
    {
        x=r*cos(t*z);
        y=r*sin(t*z);
    }
    void display()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }

};
int main()
{
    convert con;
    con.polar(5,45);
    con.cartesian();
    con.display();

    return 0;

}
