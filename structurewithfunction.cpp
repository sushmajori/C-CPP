// This program demonstrate the structure with function in cpp

#include<iostream>
using namespace std;
struct Customer
{
    char name[20];
    float cid;
    int age;
};
void diplaycustomerdetails(Customer);
int main()
{
    Customer s;

    cout<<"Enter Name:"<<endl;
    cin.getline(s.name,20);
    cout<<"Enter Customer id"<<endl;
    cin>>s.cid;
    cout<<"Enter Age:"<<endl;
    cin>>s.age;
    diplaycustomerdetails(s);

    return 0;
}
void diplaycustomerdetails(Customer s)
    {
        cout<<"Display Customer information:";
        cout<<"Name:"<<s.name<<endl;
        cout<<"Customer ID:"<<s.cid<<endl;
        cout<<"Age:"<<s.age;
    }
