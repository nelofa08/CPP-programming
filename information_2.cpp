#include<bits/stdc++.h>
using namespace std;

class person
{
    protected:
        string name;
        int age;
        string gender;
	//declare name and weight as private variable

public:
person(){}
person(string n,int a,string g)
{
       name=n;
       age=a;
       gender=g;
}
void set(string n,int a,string g )
{
        name=n;
       age=a;
       gender=g;
}
void show()
{
    cout<<"NAME:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Gender:"<<gender<<endl;
}
};
class student: protected virtual person
 {
     protected:
        string deptname;
        int id;
     //inherit A class as protected
	//declare age and fathername as private varible
protected:
student(){}
student(string d_name,int i_d)
{
    deptname=d_name;
    id=i_d;
}
void set(string d_name,int i_d)
{
    deptname=d_name;
    id=i_d;
}
void  show()
{
    cout<<"Department Name:"<<deptname<<endl;
    cout<<"ID:"<<id<<endl;
}
};
class worker: protected virtual person
 {
     protected:
        int salary;
        string companyname;
     //inherit A class as protected
	//declare gender and mothername as private variable
protected:
worker(){}
worker(int s , string comname)
{
    salary=s;
    companyname=comname;

}
void set(int s , string comname)
{
    salary=s;
    companyname=comname;
}
void show()
{
    cout<<"Salary:"<<salary<<endl;
    cout<<"Company Name"<<companyname<<endl;
}
};
class parttime: public student, public worker
 {		//inherit B and C classes

public:
parttime(){}
void set(char *n,int a,char *g,char *d_name,int i_d, int s , char *comname)
{
        name=n;
       age=a;
       gender=g;
       deptname=d_name;
        id=i_d;
       salary=s;
        companyname=comname;
}
void  show( )
{
    cout<<"Name:::"<<name<<endl;
    cout<<"Age:::"<<age<<endl;
    cout<<"Gender::"<<gender<<endl;
    cout<<"Department Name:::"<<deptname<<endl;
    cout<<"ID:::"<<id<<endl;
    cout<<"Salary:::"<<salary<<endl;
    cout<<"Company Name:::"<<companyname<<endl;

}
};

int  main()
{
  parttime ob;
  int L,i;
  cin>>L;
  for(i=0;i<L;i++)
  {
      p[L].set()
  }
  for(i=0;i<L;i++)
  {
      p[L].show()
  }
  freopen("in.txt","r",stdin);
  ob.show();

    return 0;

}


