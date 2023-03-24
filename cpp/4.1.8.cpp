// while playing with the butterfly patter i found this
/*

*          * 
 *  *        *  * 
 *  *  *      *  *  * 
 *  *  *  *    *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *    *  *  *  * 
 *  *  *      *  *  * 
 *  *        *  * 
 *          * 

*/
// i have only changed the number of spaces in the previous code

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter the value of n: ";
    cin>>a;

    for(int i=1; i<=a; i++)     // rows of first half
    {


        for(int j=1; j<=i; j++)    // first of stars before spaces
        {
            cout<<" * ";
        }


        for(int k=1; k<=2*(a-i); k++)  // spaces in between the stars
        {
            cout<<" ";
        }


        for(int j=1; j<=i; j++)    // second of stars after spaces
        {
            cout<<" * ";
        }

        cout<<endl;


    }

   
   
   
   
    for(int i=a; i>=0; i--)
    {
        
        
        for ( int j=1; j<=i; j++)   //first set of stars
        {
            cout<<" * ";  
        }


        for( int k=1; k<=2*(a-i); k++)
        {
            cout<<" ";
        }

        for ( int j=1; j<=i; j++)   //second set of stars
        {
            cout<<" * ";  
        }

        cout<<endl;

    }
}