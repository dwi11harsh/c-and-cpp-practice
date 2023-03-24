// erase function

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1 = "nincompoop" ;

    s1.erase(3 , 3);    // string_name.erase( (f rom where to start) , ( how many characters to be erased ) ) ;

    cout << s1 << endl ;      // ninpoop
}