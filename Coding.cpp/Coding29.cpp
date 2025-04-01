#include<iostream>
using namespace std;
//Templates in C++ / Function Template  

template<class p, class q>

void fun1(p x , q y)
{
    q z = x+y;
    cout<<z<<endl;
}

int main()
{
    fun1(6,17.61);
    // fun1(5.3, 81.6);

    return 0;
}