// insert

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string st = "nincompoop" ;

    // SUBSTRING - SMALL PART OF THE STRING
      

      st.insert( 2 , "lol" ); // string_name.insert ( (where to insert in the index ) , "what_to_insert" );

      cout << st << endl;
}