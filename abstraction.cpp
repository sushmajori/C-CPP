#include<iostream>
using namespace std;
class Abstraction
{
    int num;
    char  ch;

    public:
    void set(int num,char ch)
    {
        this->num=num;
        this->ch=ch;
    }

    void get()
    {
        cout<<"Integer value"<<num<<endl;
        cout<<"Character Value"<<ch<<endl;
    }
};    
int main()
{
    Abstraction ab;
    ab.set(10,'s');
    ab.get();

    return 0;
}