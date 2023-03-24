// how to enter a complete line

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;

    getline(cin , str );     // to take string input along with spaces

    cout << str << endl ;
    return 0 ;
}