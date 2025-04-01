#include <iostream>
#include <conio.h>
using namespace std;

class Exam
{
private:
    int x, y;

public:
    Exam(int p, int q)
    {
        x = p;
        y = q;

        cout << "x is " << x << " y is " << y << endl;
    }
    //&g1 is (refrance variable) to take refrance e1 parameters.

    Exam(Exam &g1) // copy constructor
    {
        g1.x++;
        g1.y++;
    }

    void display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Exam e1(6, 9);
    Exam e2(7, 2);
    Exam e3(e1); // e1 is type of Exam
    e1.display();
    return 0;
}

/* There three types of Constructor 
1) Default Constructor
2) parametarize Constructor
3) Copy Constructor  3.51*/