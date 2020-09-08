#include<iostream>
using namespace std;
class frdfun{
    private:

    int x = 10;
        int y=10;

    friend int sum(frdfun ff);
};
int sum(frdfun ff)
    {
        return ff.x+ff.y;
    }

int main()
{
    
    frdfun ff;
    cout<<sum(ff);
    return 0;
}