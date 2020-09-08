#include<iostream>
using namespace std;
class Animal
{   public:
    virtual void sound() = 0;
    void sleeping()
    {
        cout<<"Sleeping";
    }

};
class Cat:public Animal{
    public:
    void sound()
    {
        cout<<"meow";
    }
};
int main()
{
    Cat c;    
    c.sound();
    c.sleeping();

    return 0;
}

