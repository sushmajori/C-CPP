#include<iostream>
using namespace std;
int main()
{
    string str = "12345678098765431234567809876543";
    int i = 0;
    int len=  str.size();
    int arr[len];
    while(i!=len){
    
        arr[i] = str[i] - '0';
        i++;
    }
        for (int i = 0; i < str.size(); i++)
         {
           cout << arr[i];
         }    
    return 0;
}