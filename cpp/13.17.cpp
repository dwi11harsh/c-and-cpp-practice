// size of string

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string st = "nincompoop" ;

    // SUBSTRING - SMALL PART OF THE STRING
      

      cout << st.size() <<  endl;    // both size() and length() are the same thing

      cout << st.length() <<  endl;

      // these help in iteration

      for( int i = 0 ; i < st.length() ; i++ )
      {
          cout << st[i] << endl ;
      }
}
