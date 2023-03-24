// ifelse example
// a robot takes commands from a to e and 
// says hello in different languages

#include<iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    switch( c )
    {
        case 'a':
       {
            cout << " HELLO " << endl;
            break;
       }
       case 'b':
       {
            cout << " NAMASTE " << endl;
            break;
       }
       case 'c':
       {
            cout << " HOLA " << endl;
            break;
       }
       case 'd':
       {
            cout << " SALUTE " << endl;
            break;
       }
       case 'e':
       {
            cout << " CIAO  " << endl;
            break;
       }
       default:{
       cout << "I AM STILL LEARNING" << endl;
       break;
       }
        
    }
}