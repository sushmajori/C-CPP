#include<iostream>
using namespace std;
//n1 = 10 n2 = 20
    // output should be 1020
    int num(int a , int b)
    {
        string s1= to_string(a);
        string s2= to_string(b);

        string s = s1+s2;
        int con = stoi(s);
        return con;
    }
int main()
{
   cout<<num(10,20);   
    return 0;
}