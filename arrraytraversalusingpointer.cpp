#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,11,12,13,14,15};
    int *p;
    p = arr;

    for(int i=0;i<6;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;

}