// example of jump statements
// print numbers from 1 to 100 and skip numbers which are divisible by 3
//continue statement

#include<iostream>
using namespace std;

int main()
{
    for (int i =0; i<100; i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
}