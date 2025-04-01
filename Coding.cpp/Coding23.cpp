#include<iostream>  //Abstract class in C++
   
using namespace std;

class Bank
{
    public:
    int roi;
    virtual void rofi() = 0;  //pure virtural fun
    
    void f1()
    {
        cout<<"parent's f1 executed.";
    }
    Bank()
    {
        cout<<"parent's Constructor..."<<endl;
    }
};

class SA : public Bank
{
    public:
    void rofi()
    {
        cout<<"rofi applied...";
    }

    SA() : Bank()
    {
        cout<<"Child's Constructor..."<<endl;
    }

};

int main()
{
    SA s1;
    s1.rofi();
    return 0;
}

/*To assign a value in private instance member variable of parent class at that time we need constructor in abstract class, when we create the object of child class at that time child's constructor has been called &compiler call the parent's constructor & execute the parent's constructor before the child constructor */