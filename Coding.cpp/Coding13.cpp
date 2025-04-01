#include<iostream> //Unary operator overloading
using namespace std;
class UnaryO
{
    int x,y;
    public:
        void setData(int p, int q)
        {
            x = p;  y = q;
        }
        UnaryO operator - ()
        {
            UnaryO v1;
            v1.x=-x;
            v1.y=-y;
            return v1;
        }
        void display()
        {
            cout<<x<<" "<<y<<endl;
        }
};

int main()
{
    UnaryO u1, u2, u3;
    u1.setData(4,7);
    u2=-u1;
    u2.display();
    return 0;
}