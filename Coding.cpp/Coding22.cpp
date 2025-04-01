#include<iostream>
using namespace std;

class A //Abstract class
{
    public:
        A()
        { 
            cout<<"Parent Constructor..."<<endl;
        }
        virtual void fun1() = 0; //pure virtual function
};

class B : public A
{
    public:
        B(){
            cout<<"Child Constructor..."<<endl;
        }
        void fun1()
        {
            
        }
        void f1()
        {

        }
};

int main()
{
    B a1;
    a1.fun1();    
    return 0;
}
//7.24