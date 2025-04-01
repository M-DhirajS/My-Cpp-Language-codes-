#include<iostream>  //Constructor & Distructor Using Ineritance in C++
using namespace std;  // ~(tilled) operator the sign of Distructor

class A
{
    int s;
    public:
        A(int g)
        {
            s = g;
            cout<<"Parent Constructor..."<<endl;
            cout<<s<<endl;
        }
        ~A()
        {
            cout<<"Parent Destructor"<<endl;
        }
};

class B : public A
{   
    public: 
    B(int p) : A(p)
    {
        cout<<"Child Constructor..."<<endl;
    }
    ~B()
    {
        cout<<"Child Destructor"<<endl;
    }
};

int main()
{
    B b1(6);

    return 0;
}