/*

Dynamic Memory Allocation

Stack Memory Allocation:-

The memory is allocated on the function call stack. The memory gets deallocated
as soon as the function call gets over. Deallocation is handled by the compiler.


Heap Memory Allocation:-

Allocation takes place on the pile of memory space available to programmers to
allocated and de-allocate. The programmer has to handle the deallocation manuall.
Non deallocation of this variable results in memory leak which should always be ignored at all cost.

MEMORY LEAK:-

A Memory Leak is a situation where there are objects present in the heap that are no longer used,
but the garbage collector is unable to remove them from memory, and therefore, they're unnecessarily maintained. 
A memory leak is bad because it blocks memory resources and degrades system performance over time.


NOTE: It is different from the heap data structure.


Delete Operator
To de-allocate a memory p, we pass its address to the delete() function.

*/

#include<iostream>
using namespace std;

int main()
{
    int a = 10 ;         // stored in stack

    int *p = new int();   // allocate memeory in heap

    *p = 10 ;      // assigning value in heap

    delete ( p );   // deleting the previous written integral value in heap , but the variable still points in heap which is empty

    p = new int[ 4 ] ;  // same pointer is assigned an array and this points on the zeroeth element of the array
  
    delete[]p;      // deleting the written array in heap , but the variable still points in heap which is empty

    p = NULL ;       // after this the pointer is removed from the heap

    return 0 ;
}