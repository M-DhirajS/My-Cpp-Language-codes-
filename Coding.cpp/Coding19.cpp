// Function Overloading,Overriding,Hiding,Virtual Funtion And Abstract Class

#include<iostream>
using namespace std;
// Funtion OverLoading Program
class A
{
    public:
        void f1()
        {
            cout<<"fun1 executed";
        }
        void f1(int x)
        {
            cout<<"fun2 executed";
        }
};

int main()
{
    A a1;
    a1.f1();
    return 0;
}

// Poly + Morphism = Many + Forms
    // Compailer has to be dicide during compile time, which function is to be executed, is called polymorphism.

// Function Overloading
    // Function ka name same aur aurguments alag alag wo function overloading hai.aur function overloading ek he class main hoti hai.

// Function Overriding 
    // function ka name same aurguments bhi same wo function overriding hota hai. aur function Overriding sirf Parant class aur child class aise two class main hoti hai, sirf ek class main nahi hoti.

// Function hidding
    // function ka name same arguments alag alag aur alag alag class main hoti hai wo funtion hidding hoti hai. 