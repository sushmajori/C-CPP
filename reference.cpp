//Program for how to use reference in cpp
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    cout<<a<<"\n";
    cout<<r<<"\n";
    r++;
    cout<<a<<"\n";
    cout<<r<<"\n";
    return 0;

}
