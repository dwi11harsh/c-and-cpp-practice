// check if entered word is palindrome

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of the character set value : ";
    cin >> n;
    char c[n+1];
    cout << "enter the character set  : " << endl;
    cin >> c;
    bool flag = 1;

    for ( int i = 0 ; i < n ; i ++ )
    {
        if ( c[i] != c[ n - 1 - i ] )
        {
            flag = 0;
            break;
        }
    }

    if(flag == 0)
    {
        cout <<endl<< "NOT A PALINDROME" << endl;
    }
    else
    cout << endl << "PALINDROME" << endl;

    return 0 ;
}