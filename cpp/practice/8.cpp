// finding out the size of various data types

#include<iostream>
using namespace std;

int main()
{
    int a = 12;                 // 4 byte 
    cout << sizeof(a) << endl;

    float b = 12;                // 4 byte
    cout << sizeof(b) << endl;

    char c = 12 ;                 // 1 byt
    cout << sizeof(c) << endl;

    bool d = false ;               // 1 byte
    cout << sizeof(d) << endl;

    short int e = 12 ;             // 2 byte
    cout << sizeof(e) << endl;

    long int f = 12 ;             // 8 byte
    cout << sizeof(f) << endl ;
}