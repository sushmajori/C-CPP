#include<iostream>
using namespace std;
class frdfun{
    private:
        int x=10;

        friend int sum(frdfun f);

};
int sum(frdfun f)
{
    return f.x;
}
int main(){
frdfun f;
cout<<sum(f);
    return 0;
}