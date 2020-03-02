#include <iostream>
using namespace std;
class Number{
    private:
        int num;
    public:
        //default constructor
    Number()
    {
        num=0;
    }
        //parameterized constructor
    Number(int a)
    {
        num=a;
    }
        //display number
    void display()
    {
        cout<<num<<endl;
    }
};

int main(){
    //declaration array of objects
    //with parameterized constructor
    Number array[5]={3,4,7,8,9};
   //display the value of the array.
    for(int i=0;i<5;i++)
    {
        array[i].display();
    }
    return 0;
}
