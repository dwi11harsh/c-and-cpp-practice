// FIND THE FIRST AND LAST OCCURENCE OF A NUMBER IN AN ARRAY

#include<iostream>
using namespace std;

int firstOccurence ( int arr[] , int n , int key , int i )
{
    if ( i == n )
       return -1 ;
    if ( arr[ i ] == key )
       return i ;

    return firstOccurence ( arr , n , key , i + 1 ) ;  // use i ++ and you will get SEGMENTATION FAULT ;
}



int lastOccurence ( int arr[] , int n , int key , int i )
{
    if ( i == 0 )
       return -1 ;

    if ( arr[ i ] == key )
       return i ;

       return lastOccurence ( arr , n , key , i - 1 ) ; // SAME CASE WITH i -- ;
}



int main()
{
    int arr[] = { 4 , 2 , 1 , 2 , 5 , 2 , 7 } ;

    cout << firstOccurence ( arr , 6 , 2 , 0 ) << endl ;

    cout << lastOccurence ( arr , 6 , 2 , 6 ) << endl ;


    return 0 ;
}

/*

WHAT IS SEGMENTATION FAULT ?

- SEGMENTATION FAULT OCCURS DUE TO MEMORY ACCESS VIOLATION .

1 . STACK OVERFLOW
2 . WRITE VIOLATION
3 . READ VIOLATION
4 . AND MANY MORE BUT ALL RELATED TO MEMORY ERROR

*/