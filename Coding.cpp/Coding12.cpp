#include<iostream> //Binary Operator Overloading
#include<conio.h>
using namespace std;

class BinaryO
{
    int x,y;
    public: 
        void setData(int p, int q)
        {
            x = p;  y = q;
        }
        BinaryO operator +(BinaryO j1)
        {
            BinaryO z1;
            z1.x= x + j1.x;
            z1.y= y + j1.y;
            return z1;
        }
        void display()
        {
            cout<<x<<" "<<y<<endl;
        }
};

int main()
{
    BinaryO b1,b2,b3;
    b1.setData(5,7);
    b2.setData(11,8);
    b3=b1+b2;
    b3.display();
    
    return 0;
}