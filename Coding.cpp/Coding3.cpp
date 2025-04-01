#include<iostream>
using namespace std;

// in class private function access using public function

class Example
{
    int x;
    int y;

    public:
        void setData(int p, int q)
        {
            x = p;
            y = q;
        }

        void disply()
        {
            cout<<"passing the arguments "<<x<<" "<<y<<endl;
        }
};

class Demo
{
    int x;
    int y;

    public:
        void setData(int p, int q)
        {
            x = p;
            y = q;
        }

        void disply()
        {
            cout<<"passing the arguments "<<x<<" "<<y<<endl;
        }
};

int main()
{
    Example e1,e2;
    Demo d1,d2;
    e1.setData(2,3);
    e1.disply();

    e2.setData(4,5);
    e2.disply();

    return 0;
}