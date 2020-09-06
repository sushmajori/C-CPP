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
    string s1 = to_string(ED.getnum());
    cout<<ED.getchar()<<endl;
    cout<<s1+ED.getchar()<<endl;
    return 0;

}