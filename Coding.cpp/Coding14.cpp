#include<iostream>  //Unary Pre-increment program
using namespace std;

class UnaryOp
{
    int x , y;
    public:
        void setData(int p, int q)
        {
            x = p; y = q;   
        }
        UnaryOp operator ++()
        {
            UnaryOp h1;
            h1.x=++x;
            h1.y=++y;
            return h1;
        }
        void display()
        {
            cout<<x<<" "<<y<<endl;
        }
        
};

int main()
{
    UnaryOp a1,a2;  
    a1.setData(5,3);
    a2 = ++a1;
    a2.display(); 
    return 0;
}