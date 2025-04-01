#include<iostream>  //Static program concept
using namespace std;

// private static for call using public static funtion with Declaration

class Demo
{
        
    private:
        int x;
        static int y;
    public:
        static void setData()
        {
            y = 5;
            
        }

        static void display()
        {
            cout<<"The Y is "<<y;
        }
};

int Demo:: y; //decleration to private static variable

int main()
{
    //without obj creat direct class name & :: & call function using to call, private static varible.
    Demo:: setData();
    Demo:: display();   
    return 0;
}