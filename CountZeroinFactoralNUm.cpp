  // Count the number of zero in factorial of a particular number.
#include<iostream>
using namespace std;
int main()
{
    int r,n = 5;
    int i , fact = 1,countzero = 0;
    for(i=1; i<=n; i++)                                   
    {
        fact = fact *i;
    }
    cout<<fact;

    while(fact!=0)
    {
        r =fact%10;
        if(r==0)
        countzero++;
        fact=fact/10;        
    }
    cout<<countzero;
    return 0;
}

// Output 
//e.g input= 5 then factoral of a 5 is 120 and then count of zero is 0
// input : 5
// output : 1
                                                                
