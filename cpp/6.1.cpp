/* everything about functions
function is a peice of code that performs a specific task

syntax of writing functions

returnType functionName (parameter 1, parameter 2, parameter 3, ......)
{
    //fullBody
}

*/



// study the concept of call stack in order to understand working of functions


#include<iostream>
void add(int, int);
void print(int);
using namespace std;

int main()
{
    int a,b;
    cout<<"enter two digits: ";
    cin>>a>>b;
    add(a,b);
    
}
void add(int num1, int num2)
{
    int res;
    res=num1+num2;
    print(res);
}
void print(int a)
{
    cout<<" the required result is "<<a<<endl;
}