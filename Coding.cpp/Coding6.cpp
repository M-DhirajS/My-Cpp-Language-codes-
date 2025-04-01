#include <iostream> //Constructor Program concept
using namespace std;
// Constructor means same name of class and class inner function name without obj creating direct call to concstructor function.
class Exam
{
private:
    int x;

public:
    void fun1()
    {
    }

    Exam() // default Constructor
    {
        cout << "Constructor 1 " << endl;
    }

    Exam(int p) // parametarize Constructor
    {
        x = p;
        cout << "The x is " << x;
    }
};

int main()
{

    Exam e1, e2, e3;
    Exam e4(2);
    return 0;
}