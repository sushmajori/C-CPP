#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int num[2][3];
    cout<<"\n Enter Two Diamensional array Element:";
        for(i=0; i<2; i++)
        {
            for(j=0; j<3; j++)
            {
                cin>>num[i][j];
            }
        }

    cout<<"\n Your Array:";
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<< "\n array Elements:[" <<i <<"]["<<j<< "]:"<<num[i][j]<<endl;
        }
    }


return 0;
}
