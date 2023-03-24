// convert a string which has both upper and lower case elements into complete uppercase or complete lowercase

// TRANSFORM

#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;

int main()
{
    string str = "qwsdfvbnmjhytrdcfvbnm";

    // convert to upper case

    for ( int i = 0 ; i < str.size() ; i ++ )
    {
        if ( str [ i ] >= 'a' && str [ i ] <= 'z' )
             {
                 str [ i ] -= 32 ;
             }
        
        
    }

    cout << str << endl;


    // conver to lower case

    for ( int i = 0 ; i < str.size() ; i ++ )
    {
        if ( str [ i ] >= 'A' && str [ i ] <= 'z' )
             {
                 str [ i ] += 32 ;
             }
        
        
    }


    cout << str << endl ;

    transform( str.begin() , str.end() , str.begin() , ::toupper ); 
    //transform( (from_where_sting_start) , (where_string_end) , (from_where_to_start_transformation) , ::toupper / ::tolower )

    cout << str << endl;

    transform( str.begin() , str.end() , str.begin() , ::tolower ); 


    cout << str << endl;
    
    return 0 ;
}