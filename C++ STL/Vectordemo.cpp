#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v = {1,2,3,4,5};
    vector <int> :: iterator itr;
    v.push_back(6);
    v.pop_back();


    // Display the value of vector using for each loop
    cout<<"Display the value of vector using for each loop"<<endl;
    for(int x: v)
    {
        cout<<x<<endl;
    }

    // Display value of vector using for loop
    cout<<"Display value of vector using for loop"<<endl;
    for(auto i = v.begin(); i!=v.end();i++)
    {
        cout<<*i<<endl;
    }
    // Display value of vector using iterator
    cout<<"Display value of vector using iteraor"<<endl;
    for(itr = v.begin(); itr!=v.end(); itr++)
    {
        cout<<*itr<<endl;
    }
    for(int i =0; i<5; i++)
    {
        
    }

    return 0;
}
