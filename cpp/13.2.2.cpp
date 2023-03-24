// FORM THE BIGGEST NUMBER FROM THE NUMERIC STRING

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s = "87654345678";

    sort( s.begin(), s.end() , greater<int>() ) ;
    cout << s << endl ;
}