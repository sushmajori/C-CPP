// simple program which shows the opearor overloading work.
#include<iostream>
using namespace std;
class FunctionOverloading
{
    public:
        int sum(int n,int n1,int n2)
        {
            return(n+n1+n2);
        }

        int sum(int n, int n1,int n2,int n3)
        {
            return(n*n1*n2*n3);
        }
};
int main()
{
    FunctionOverloading fo;
    cout<<fo.sum(1,2,3)<<endl;
    cout<<fo.sum(1,2,3,4)<<endl;
    return 0;
}
