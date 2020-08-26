
 //C program to check prime, armstrong  numbers using functions

#include<iostream>
#include<math.h>
using namespace std;
int isPrime(int no);
int isArmstrong(int no);

int main()
{
    int no;
    cout<<"\nEnter Number:";
    cin>>no;

    // Call isPrime() functions
    if(isPrime(no))
    {
           cout<<no<<" " <<"is a Prime Number"<<endl;
    }
    else
    {
            cout<<no<<" "<<" Not a prime number"<<endl;
    }
    
    // Call isArmstrong() function
    if(isArmstrong(no))
    {
           cout<<no<<""<<"is a Armstrong Number"<<endl;
    }
    else
    {
            cout<<no<<""<<"Not a Armstrong number"<<endl;
    }
    
    
}


int isPrime(int no) 
{
    int i;
    
    for(i=2; i<=no/2; i++)  
    {  // if no divisible by any other number then it is not a prime no
        if(no%i == 0)  
        {
            return 0;
        }  
    } 
    
    return 1; 
}

int isArmstrong(int no) 
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;
    
    originalNum = no;

    /* Find total digits in num */
    digits = (int) log10(no) + 1;

    /*
     * Calculate sum of power of digits
     */
    while(no > 0)
    {
        // Extract the last digit
        lastDigit = no % 10;

        // Compute sum of power of last digit
        sum = sum + round(pow(lastDigit, digits));

        // Remove the last digit
        no = no / 10;
    }
    
    return (originalNum == sum);
}


