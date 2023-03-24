// FIND OUT WHICH CHARACTER OCCURS MOST OF THE TIMES

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s = "abdjsaabdhdhhaabdhaajbbjhdsaaa";

    int fq[26];

    for ( int i = 0 ; i < 26 ; i ++ )
    {
        fq [ i ] = 0;
    }

    for ( int i = 0 ; i < s.size() ; i ++ )
    {
        fq[ s [ i ] - 'a' ] ++ ;
    }

    char ans = 'a' ;
    int  maxF = 0 ;
     
     for ( int i = 0 ; i < 26 ; i++ )
     {
         if ( fq[i] > maxF){
              maxF = fq[i] ;
              ans = i + 'a' ;
         }

        

     }


     cout << maxF << "  " << ans << endl;
}