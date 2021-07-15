//Consider a string and calculating the number of sum are in the string
// Input : a1b2c3 Output : 6 
// Input : shdvh11ab4b3 Output : 18

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
