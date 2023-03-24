// character arrays
/*
instead of taking n characters input we take n + 1 characters input as we also have to account for "\0" also known as null character;
this null character is always there and we do not need to add it at the end of our statement
*/
#include<iostream>
using namespace std;

int main()
{
    char s[100];
    cout << " enter no more than 100 characters : " << endl;
    cin >> s;      // this is the simple way of taking the character input ;
    cout << s << endl;  // this is the simple way of giving the character output ;





    
    // if we want to print each character one after anothe we can use the following loop
    int i = 0;
    while( s[i] != '\0' )    // this means print until the program hits the null character
    {
        cout << s[i] << endl ;
        i++;
    }

    // if the user puts space in between the input than that is counted as the null character and the output will stop then and there

    /*
    // but we cannot use the following loop as it would start any garbage value present other than the values entered by the user;
    for( int i = 0 ; i < 100 ; i ++ )
    {
        cout << s[i] << endl;

    }
    */
    
}