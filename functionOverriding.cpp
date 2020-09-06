#include<iostream>
using namespace std;
class parent {
    public:
    void disp()
    {
        cout<<"Overrriden Function";
    
    }

};
class child: public parent{
    public:
    void disp()
    {
        cout<<"Overriding function";
    }

};
int main()
{
parent p = child();
p.disp();

    return 0;
}