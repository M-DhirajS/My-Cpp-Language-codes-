// Friend function how to implement in various ways

#include<iostream>
using namespace std;
class Example   //class
{
    int x,y;
    friend int fun1(Example p1, int h, int j);
    // public:
    //     void fun()
    //     {
            
    //     }
    
};

int fun1(Example p1, int h, int j)  //function
{
    p1.x=h;
    p1.y=j;
    int k = p1.x+p1.y;
    return k;

    // Example e1;
    // e1.x= 5;
    // e1.y = 2;
    // cout<<"x is "<<e1.x<<endl<<"y is "<<e1.y<<endl;
}
int main()
{   
    Example e1;
    int h;
    h=fun1(e1,5,2);
    cout<<h;
    
    return 0;
}