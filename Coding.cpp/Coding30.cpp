#include<iostream>
#include<conio.h>
using namespace std;

// Class Template

template<typename p, typename q>
class Demo
{
    p x;
    q y;
    public:
        void f1(p a, q b)
        {
            cout<<a+b;
        }
};

int main()
{
    Demo<int,double>d1;
    d1.f1(5,5.6);
    return 0;//9.30
}