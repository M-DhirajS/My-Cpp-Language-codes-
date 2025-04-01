#include<iostream>      //Function in c++
using namespace std;

int add(int p, int q)
{
    int r = p+q;

    return r;
}

int g= 6;   //Global variable

int main()
{
    int a,b;    //Local variable
    cout<<"Enter 2 Numbers :- ";
    cin>>a>>b;
    int z = add(a,b);
    cout<<"Addition is "<<z;
    return 0;
}