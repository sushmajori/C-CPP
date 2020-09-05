// Simpple Structure program which taking  input from user and display it
#include<iostream>
using namespace std;
struct student
{
    char name[30];
    int roll;
    int marks;
};
int main()
{
    student s;
    cout<<"Enter name:";
    cin.getline(s.name,30);
    cout<<"Enter Roll No:"<<endl;
    cin>>s.roll;
    cout<<"Enter marks:"<<endl;
    cin>>s.marks;

    cout<<"Display All student Information:"<<endl;
    cout<<"Name:"<<s.name<<endl;
    cout<<"Roll No:"<<s.roll<<endl;
    cout<<"Marks:"<<s.marks<<endl;

    return 0;
}
