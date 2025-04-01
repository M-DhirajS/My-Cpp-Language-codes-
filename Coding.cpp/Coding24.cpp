#include<iostream>
using namespace std;

class A
{
    int x,y;
    public:
        void setData(int x, int y)
        {
           this-> x=x; // This keyword
           this-> y=y;  // This keyword
        }
        void display()
        {
            cout<<x<<" "<<y<<endl;
        }
};

int main()
{
    A a1; 
    a1.setData(5,7);
    a1.display();

    //dynamic memory allocation
    int *k;
    k = new int;    //New & Delete Keyword
    *k = 34;
    cout<<*k<<endl;

    int *p;
    p = new int[5]; //New & Delete Keyword
    *(p+3) = 81;
    *(p+0) = 2;
    *p = 71;
    cout<<*(p+0)<<endl; 

    delete k;
    delete []p;

    return 0;
    //8.1
    
}