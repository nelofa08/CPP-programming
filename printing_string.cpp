#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char S[50]="Fahmida Yesmin Sraboni",*p;
    p= S;
    while(*p!='\0')
    {
        cout<<*p;
        p++;
    }
    return 0;
}
