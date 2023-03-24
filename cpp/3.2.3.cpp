// switch case example
// simple calculator using switch case


#include<iostream>
using namespace std;

int main()
{
    int a,b,res=0;
    char x;

    cout<<"Input two numbers"<<endl;
    cin>>a>>b;
    cout<<"Input the operation to be performed"<<endl;
    cin>>x;

    switch(x)
    {
        case '+':
        {
            res=a+b;
        break;
        }
        case '-':
        {
            res=a-b;
        break;
        }
        case '*':
        {
            res=a*b;
        break;
        }
        case '/':
        {
            res=a/b;
        break;
        }
        case '%':
        {
            res=a%b;
        break;
        default:
        cout<<"operation not found"<<endl;
        }
        
       
    }
    cout<<"required result is "<<res<<endl;
}