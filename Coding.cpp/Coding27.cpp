#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
// file handling part-2 = tellg()  tellp() function
int main()
{
    
    ifstream fin;
    char a; 
    fin.open("demo.txt");
    a=fin.get();
    while (!fin.eof())
    {
        cout<<a;
        a=fin.get();
    }
    
    fin.close();
     
    return 0;//8.40
}