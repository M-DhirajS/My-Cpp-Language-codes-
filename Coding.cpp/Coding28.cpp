#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
// file handling part-2 = tellg()  tellp() function
int main()
{
    //1) (app)append means pehele words as it is rehte hai aur aage new words dal sakte hai

    //2) (ate) update means last word copy hoke phirse rewrite hota hai

    ofstream fout;
    fout.open("demo.txt",ios::app | ios::ate); 
    fout<<"Nashik";
    cout<<fout.tellp();
    fout.close();
     
    return 0;//8.57
}