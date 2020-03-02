#include<iostream>
#include<math.h>
using namespace std;
class dis{
    int a,b;
public:
    void get()
{
    cout<<"Enter the  value of a point"<<endl;
    cin>>a>>b;
}
friend void add(dis,dis);
};
void add(dis s,dis h)
{    int m;
    float n;
    m=( pow(h.a-s.a,2)  +   pow(h.b-s.b,2) );
    n=pow(m,0.5);
    cout<<"Distance between point(a1,a1) and (b1,b2) is:"<<n<<endl;
}
int main()
{
    dis x,y;
    x.get();
    y.get();
    add(x,y);
return 0;
}

