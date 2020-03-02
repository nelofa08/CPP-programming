#include<iostream>
#include<cstring>
using namespace std;

class A
{
    protected:
        string name;
        double weight;
	//declare name and weight as private variable

public:
A(){}
A(string n,double w)
{
       name=n;
       weight=w;
}
void set(string n,double w )
{
    name=n;
    weight=w;
}
void show()
{
    cout<<"NAME:"<<name<<endl;
    cout<<"Weight:"<<weight<<endl;
}
};
class B: protected virtual A
 {
     protected:
        string fathername;
        int age;
     //inherit A class as protected
	//declare age and fathername as private varible
protected:
B(){}
B(int a,string f)
{
    age=a;
    fathername=f;
}
void set(string f,int a)
{
    age=a;
    fathername=f;
}
void  show()
{
    cout<<"FATHER NAME:"<<name<<endl;
    cout<<"AGE:"<<age<<endl;
}
};
class C: protected virtual A
 {
     protected:
        string gender;
        string mothername;
     //inherit A class as protected
	//declare gender and mothername as private variable
protected:
C(){}
C(string m, string g)
{
    gender=g;
    mothername=m;
}
void set(string m,string g)
{
    gender=g;
    mothername=m;
}
void show()
{
    cout<<"MOTHER NAME:"<<name<<endl;
    cout<<"GENDER:"<<gender<<endl;
}
};
class citizen: public B, public C
 {		//inherit B and C classes

public:
citizen(){}
void set(char *n,double w,char *f,int a,char *m,char g)
{
    name=n;
    weight=w;
    fathername=f;
    age=a;
    mothername=m;
    gender=g;
}
void  show( )
{
    cout<<"Name:::"<<name<<endl;
    cout<<"Weight:::"<<weight<<endl;
    cout<<"Father's Name:::"<<fathername<<endl;
    cout<<"Age:::"<<age<<endl;
    cout<<"Mother's Name:::"<<mothername<<endl;
    cout<<"Gender:::"<<gender<<endl;

}
};

int  main()
{
  citizen ob;
  ob.set("C++",50.55,"JAVA",56,"MSQL",'F');
  ob.show();

    return 0;

}

