#include<iostream>
using namespace std;
int main()
{
    string s;
    int sum = 0;
    int i; 
    cout<<"Enter String";
    getline(cin,s);
    
    for(i =0; s[i]!='\0'; i++)
    {
        if(s[i]>='0' and s[i]<='9')
        {
             sum += (s[i] - '0');
        }
    }
    cout<<"sum of digit: "<<sum;


return 0;
}
