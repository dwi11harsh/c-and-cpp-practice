// check for maximum leangth word in the array
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << " enter the array length : " ;
    cin >> n;

    
    cin.ignore();    // have to use coz we have used cin.getline() later in our program

    char a [ n + 1 ];

    cout << " enter the line : " << endl ; 

    cin.getline( a , n );   // this is used to take a line as input which also has spaces 
    // if cin.getline() is not used the we would have to make a new character array for every word

    cin.ignore();  // verytime we use cin.getline we also have to use cin.ignore to remove any buffer

    int i = 0 ;

    int currentlength = 0 , maxlength = 0 ;
    
    int st = 0, maxst = 0 ;
    while ( 1 )
    {
        if ( a[i] == ' ' || a[i] == '\0' )   // anytime we hit the space or the null character the currentlength and the maxlength will be compared and after that the currentlength will be changed to zero
        {
            if(currentlength > maxlength )
            {
                maxlength = currentlength;
                maxst = st;

            }
            currentlength = 0 ;
        }
        else  {               // if there is no space then only the currentlength should be increased
        currentlength ++ ;
        st ++ ;
        }


        if( a[i] == '\0' )   // as soon as the null character is hit the loop will stop execution
           break;
        

        i++;
    }

    for ( int i = 0 ; i < maxlength  ; i ++ )
    {
        cout << a[ i + maxst - 1 ] ;
    }

    cout <<endl << maxlength << endl ;


}