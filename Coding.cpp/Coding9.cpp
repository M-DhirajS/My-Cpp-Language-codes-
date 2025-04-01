#include<iostream>  //Inheritance in C++
#include<conio.h>

using namespace std;

class Samsung1
{
    public:
    int x,y;
    
        void f1()
        {
            x = 5;
        }
        void f2()
        {
            y = 2;
        }
};

class Samsung2 : public Samsung1    //Single Inheritance
{
    public:
    int z;
    
        void f3()
        {
            z = 9;
        }
        void f4()
        {
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
};

class Samsung3: public Samsung2     //Multilevel Inheritance
{
    public:
    int a,b;
    
        void f5()
        {
            a = 7;
            b = 8;
            cout<<x<<" "<<y<<" "<<z<<" "<<a<<" "<<b<<endl;
        }
};

int main()
{
    Samsung3 s1;
    
    s1.f1();
    s1.f2();
    s1.f3();
    s1.f4();
    s1.f5();
    return 0;
} 

/*There are five types of Inheritance 
1) single Inheritance
2) Multilevel Inheritance
3) Multiple Inheritance
4) Herarckey Inheritance
5) Hybrid Inheritance */