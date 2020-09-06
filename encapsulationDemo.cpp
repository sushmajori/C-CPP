#include<iostream>
using namespace std;
class EncapsulationDemo{
    private:
        int num;
        char ch;
        public:
    int getnum()
    {
        return num;
    }
    char getchar()
    {
        return ch;
    }

    int set(int num)
    {
        this->num=num;
    }
    char set(char ch)
    {
       this->ch=ch;
    }
};
int main()
{
    EncapsulationDemo ED;
    ED.set(10);
    ED.set('s');
    cout<<ED.getnum()<<endl;
    cout<<ED.getchar();
    return 0;

}