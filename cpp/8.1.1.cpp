/* Arrays

datatype arrayName[size];       // initialisation

if( int array[4])
space allocated = 16 bytes
4 byte for each of the variable;

the memory location are numbered in hexadecimal;

array always have a zero indexing
it means the first element is stored as zeroth element and the second as first

*/
#include<iostream>
using namespace std;

int main()
{

    int array[4] = { 10, 20, 30, 40 } ;

    cout<<array[3]<<endl;     // this will give 40 due to zero indexing

}