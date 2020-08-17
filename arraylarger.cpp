/*
This program reads integers from the standard input (until it gets a negative number) 
and puts them into an array. After that it finds the highest number in the array that is less than 100 and prints that to the 
standard output. It should return 0 if the array has no numbers less than 100.
*/

#include<iostream>
using namespace std;
int main()
{
 
 int num[5];
 int i;

 cout<<"\nEnter Number which you wanted to  be stored in array :";
 
    for(i=1;i<=5;++i)
    {
        cin>>num[i];
            if(num[i]<0)
            {
                break;
            }
    }

    for(i=1; i<=5;i++)
    {
        if(num[i]<=100)
        {
            if(num[0] < num[i])
            num[0] = num[i];
        }

    }
     cout<<"Largest Element:"<<num[0];

     if(num[i]<100)
     {
         return 0;
     }
    
    return 0;
}