#include<iostream>
using namespace std;
// Funtion OverLoading Program
class A
{
    public:
        void f1()   //funtion overloading 
        {
            cout<<"parant f1 executed";
        }
        void f1(int x)  //funtion hidding   //funtion overloading
        {
            cout<<"parant f1 executed";
        }
};

class B : public A  //inheritance 
{
    public:
        void f1()   //funtion overrding
        {
            cout<<"child f1 executed";
        } 
};

int main()
{
    B a1;
    a1.f1();
    return 0;
}