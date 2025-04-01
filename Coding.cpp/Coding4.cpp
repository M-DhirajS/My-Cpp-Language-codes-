#include<iostream>  //static porgram function
using namespace std;

// public static using ::(scope resolution) function for accessing;

class Demo
{
    public:
        int x;
        static int y;
};

int Demo::y = 5;    //decleration to private static variable

int main()
{
    cout<<Demo::y;  //without obj creat direct class name & :: using to call, public static varible.
    return 0;
}