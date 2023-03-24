// COUNT THE NUMBER OF ONES IN THE BINARY FORM OF THE GIVEN NUMBER

#include<iostream>
using namespace std;

int numberofones( int n )
{
    int count = 0 ;

    while(n)
    {
        n = n & (n-1);
        count ++ ;
    }

    return count ;
}

int main()
{
    int n ;
    cout << " enter the number : " ;
    cin >> n ;
    cout << " the number of ones in " << n << " are " << numberofones(n) << endl ;
}