// pointer to pointer 

#include<iostream>
using namespace std;

int main()
{
    int a = 10 ;
    int *p;
    p = &a;

    cout << *p << endl ;
    
    int **q = &p ;

    cout << **q << endl ;  // **q = 10 = it will go upto a  // value of a

    cout << *q << endl ;  // *q = it will go upto p  // address of p

    cout << q << endl ;  // this one will remain at q // address of q

    return 0 ;
}