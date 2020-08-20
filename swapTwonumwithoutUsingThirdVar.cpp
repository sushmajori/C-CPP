// Swapping Two number without using third variable.
// Hint: We can use * and / for swapping the value of two variable  and also we can use + and - for swapping the value of two variable.
// Below i have used * and / .
#include<iostream>
using namespace std;
int main()
{
    int a=10, b=20;
    cout<<"Before Swapping value of a and b is: "<<a<<"\t"<<b<<endl;
    a=a*b; //10*20= 200
    b=a/b; // 200/20=10
    a=a/b; //200/10=20;
    cout<<"Value of a:"<<a<<"\nValue of b:"<<b<<endl;
    return 0;
}
