// C++ code for checking year is leap or not

#include<iostream>
using namespace std;
int main()
{

int year;
cout<<"Enter year";
cin>>year;

if((year % 4 == 0) and (year % 100 != 0) or (year % 400 == 0)){
cout<<"leap year"; }
else{
cout<<"not a leap yera";}

    return 0;
}
