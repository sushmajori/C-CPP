#include<iostream>
using namespace std;
class frdfun{
    private:
    int x;
    char y;
    public:
        void numchar(int x, char y){
            x=x;
            y=y;

        }
        friend class display;
};
class display{

        int z;
        public:
         
        void display1(frdfun f)
        {
            cout<<"value of x:"<<f.x;
            cout<<"value of y:"<<f.y;

        }

};

int main()
{
    display d;
    frdfun ff;
    d.display1(ff);

    return 0;
}