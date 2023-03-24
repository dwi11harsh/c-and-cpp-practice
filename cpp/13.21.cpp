#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s = "asdfghjkl" ;


    sort(s.begin(), s.end());

    cout << s << endl;

    return 0 ;
}