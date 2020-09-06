    #include <iostream>
    #include <sstream>
    #include <string>
    using namespace std;
    int main()
    {
        int a = 10;
        int b = 20;
        ostringstream oss;
        oss << a << b;
        istringstream iss(oss.str());
        int c;
        iss >> c;
        cout << c << endl;
    }