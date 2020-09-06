#include<iostream>
using namespace std;
class virFunction{
    public:

   virtual void sum()
    {
      cout<<"parent class";
    }


};
class child: public virFunction{
  virtual void sum()
    {
      cout<<"child class";
    }

};
int main()
{
    virFunction *vf;
    vf = new child();
    vf-> sum();
    
    return 0;
}
