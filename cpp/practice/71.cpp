#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << endl << " input two binary numbers for sum : " ;
    cin >> a >> b;
    int sum = 0 ;


    {
        int ta = a;
        int tb = b ;
        int carry = 0 ;

        while ( a > 0 && b > 0)
        {
            if ( a % 10 == 0 && b % 10 == 0 && carry == 0 )
            {
                sum = sum * 10 + 0 ;
                a /= 10 ;
                b /= 10 ;
                carry = 0 ;
            }

            else if ( a % 10 == 0 && b % 10 == 0 && carry == 1 )
            {
                sum = sum * 10 + 1 ;
                a /= 10 ;
                b /= 10 ;
                carry = 0 ;
            }

            else if ( a % 10 == 0 && b % 10 == 1 && carry == 0)
            {
                sum = sum * 10 + 1 ;
                a /= 10 ;
                b /= 10 ;
                carry = 0 ;
            }

            else if ( a % 10 == 0 && b % 10 == 1 && carry == 1 )
            {
                sum = sum * 10 + 0 ;
                a /= 10 ;
                b /= 10 ;
                carry = 1 ;
            }

            else if ( a % 10 == 1 && b % 10 == 0 && carry == 0)
            {
                sum = sum * 10 + 1 ;
                a /= 10 ;
                b /= 10 ;
                carry = 0 ;
            }

            else if ( a % 10 == 1 && b % 10 == 0 && carry == 1 )
            {
                sum = sum * 10 + 0 ;
                a /= 10 ;
                b /= 10 ;
                carry = 1 ;
            }

            else if ( a % 10 == 1 && b % 10 == 1 && carry == 0 )
            {
                sum = sum * 10 + 0 ;
                a /= 10 ;
                b /= 10 ;
                carry = 1 ;
            }

            else if ( a % 10 == 1 && b % 10 == 1 && carry == 1 )
            {
                sum = sum * 10 + 1 ;
                a /= 10 ;
                b /= 10 ;
                carry = 1 ;
            }

        }

        if ( b > 0 )
        {
            while ( carry == 1 && b > 0 )
            {
                if ( b % 10 == 1 )
                {
                    sum = sum * 10 + 0 ;
                    carry = 1 ;
                    b /= 10 ;
                }

                else if ( b % 10 == 0 )
                {
                    sum = sum * 10 + 1 ;
                    carry = 0 ;
                    b /= 10 ;
                }
            }
            if ( carry == 0 )
            {
                while ( b > 0 )
                {
                    sum = sum * 10 + ( b % 10 ) ;
                    b /= 10 ;
                }
            }

        }

        if ( a > 0 )
        {
            while ( carry == 1 && a > 0 )
            {
                if ( a % 10 == 1 )
                {
                    sum = sum * 10 + 0 ;
                    carry = 1 ;
                    a /= 10 ;
                }

                else if ( a % 10 == 0 )
                {
                    sum = sum * 10 + 1 ;
                    carry = 0 ;
                    a /= 10 ;
                }
            }
            if ( carry == 0 )
            {
                while ( a > 0 )
                {
                    sum = sum * 10 + ( a % 10 ) ;
                    a /= 10 ;
                }
            }

        }

        {
            int temp_sum = 0 ;

            while ( sum > 0 )
               {
                  temp_sum = temp_sum * 10 + ( sum % 10 ) ;
                   sum /= 10 ;
               }

               sum = temp_sum ;

        }

        cout << endl << "sum of " << ta << " & " << tb << " is " ;

    }

    cout << sum << endl ;
}