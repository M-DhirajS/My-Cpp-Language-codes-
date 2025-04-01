#include <iostream>
using namespace std;

class A
{
public:
    virtual void f1() //virtual function using to not early bindding parent function.
    {
        cout << "Parant function..." << endl; //function overriding
    }
};

class B : public A
{
public:
    void f1()
    {
        cout << "Child funtion..." << endl; //function overriding
    }
};

int main()
{
    A *a1;
    B b1;
    a1 = &b1;
    a1->f1();   //using pointer function to direct run parent function 
    // b1.f1(); //by default child funtion for executed
    return 0;
}