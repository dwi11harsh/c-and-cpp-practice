#include<iostream>
#include<string>
using namespace std;

int main()
{

    string s1 = "abc" ,s2 = "abc" ;

    if ( ! s2.compare(s1) )
       cout << " strings are equal " << endl;
    else
       cout << " strings are not equal " << endl ;
    return 0 ;

}