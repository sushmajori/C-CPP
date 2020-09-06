#include<iostream>
using namespace std;
class parent{
    public:

    void display()
    {
        cout<<"parent Class function"<<endl;
    }
};

class child{

    public:

    void display()
    {
        cout<<"Child class method"<<;

    }
};
int main()
{
    parent p;
    p.display();
    child c;
    c.display();
    return 0;
}