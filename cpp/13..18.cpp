// SUBSTRING

// string.substr( n , i );


#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1 = "nincompoop" ;

    string s = s1.substr( 6 , 4 );  // string_name.substr( (from where to start) , upto how many characters );
    cout << s << endl ;
}