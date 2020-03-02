
#include<iostream>
using namespace std;
inline int maxmin(int,int);
int main()
{
    int m,n;
    cin>>m>>n;
    cout<<"maximum = "<<maxmin(m,n)<<endl;
}
inline int maxmin(int m, int n)
    {
        return(m>n?m:n);
    }
