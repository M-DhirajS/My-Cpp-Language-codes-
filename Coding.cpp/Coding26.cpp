#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

//>>(extraction operator  )
int main()
{
    ifstream fin;   //input //file ke andar se content nikalne keliye
    char a[20];
    fin.open("demo.txt");
    fin>>a;
    cout<<a;
    fin.close();
    return 0;
}