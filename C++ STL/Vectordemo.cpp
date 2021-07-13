#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    vector <int>::iterator itr;

    // for(int x : v)
    // {
    //     cout<<x;
    // }

    // for(itr = v.begin(); itr!=v.end(); itr++)
    // {
    //     cout<<*itr;
    // }


    for(int i = 0; i<=5; i++)
    {
        v.push_back(i);
    }

    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";

    return 0;
}
