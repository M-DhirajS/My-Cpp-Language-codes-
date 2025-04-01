#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
//C++ STL ,Vector Class, List Class
int main()
{
    vector<int>v1;
    v1.push_back(11);
    v1.push_back(22);
    v1.push_back(33);
    v1.push_back(44);
    v1.push_back(55);
 
    // v1.pop_back();
    // v1.pop_back();

    vector<int>::iterator i1=v1.begin();
    while(i1!=v1.end())
    {
        cout<<*i1<<" ";
        i1++;
    }
    // for(i=0;i<5;i++)
    // {
    //     cout<<v1[i]<<" ";
    // }
    return 0;
}
//array,map,string,pair,list,tuple,vector