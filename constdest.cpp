#include<iostream>
using namespace std;
class consdest{
    public:
    int x,y;
        consdest()
        {
            cout<<"Default Constructor"<<endl;
        }

        consdest(int a,int b)
        {
            x=a;
            y=b;
            cout<<x+y<<endl;
        }

        ~consdest()
        {
            cout<<"Destructor is called"<<endl;
        }


};
int main()
{
    consdest cd1;
    consdest cd(10,11);
    consdest cd2 = consdest(22,11);

    return 0;
}