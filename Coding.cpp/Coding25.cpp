#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
//file handling ifstream and ofstream class
int main()
{
    ofstream fout;  //output //file ke andar content rakhne keliye
    fout.open("demo.txt");
    fout<<"Hello Dhiraj.. .";   //<<(insertion operator)
    fout.close();
    
    return 0;
}