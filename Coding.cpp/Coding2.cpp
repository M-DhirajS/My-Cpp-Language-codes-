#include<iostream>  //Classes and Objects 
using namespace std;

class Car
{
    public:
    // Instance member variables
    int tyre;    
    int steering;
    int brake;

    // Instance member Functions
    void fitTyre()
    {
        cout<<tyre<<endl;
        cout<<"Tyre fit successfully."<<endl;
    }

    void setBrake()
    {
        cout<<brake<<endl;
        cout<<"Brake set successfully."<<endl;
    }
};

int main()
{
    Car c1,c2;
    c1.tyre = 4;
    c2.tyre = 5; 

    c1.brake = 1;
    c2.brake = 2;
 
    c1.setBrake();
    c1.fitTyre();

    c2.setBrake();
    c2.fitTyre();
     
    return 0; 
}