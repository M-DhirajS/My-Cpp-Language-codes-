// Friend function how to implement in various ways
// two class for accessing to using one friend function
#include<iostream>
using namespace std;
class Example2;   //class declaration
class Example1   //class
{
    int x;
    public:
        void fun1()
        {
            
        }
    friend void fun3(Example1 t1, Example2 t2);
    
};

class Example2
{
    int y;
    public:
        void fun2()
        {

        }
    friend void fun3(Example1 t1, Example2 t2);
};

void fun3(Example1 t1, Example2 t2)  //function
{
    t1.x=5;
    t2.y=2;
    cout<<t1.x+t2.y<<endl;
}
int main()
{   
    Example1 e1;
    Example2 e2;
    fun3(e1,e2);
    return 0;
}