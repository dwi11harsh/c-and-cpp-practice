// pre and post incrementer/decrementer example

#include<iostream>
using namespace std;

int main()
{
    int i = 1;
        //1   //3
    i = i++ + ++i;
    //4
    cout<<i<<endl;
}