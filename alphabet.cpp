#include<iostream>
using namespace std;
int main()
{
 char c;
 cout<<"Enter Character:"<<endl;
 cin>>c;

 if((c>='a' and c<='z')||(c>='A' and c<='Z'))
 {
     cout<<c<<"  is a alphabet"<<endl;

 }
  else
  {
      cout<<c<<"Not an alphabet";
  }
  
 
    return 0;
}