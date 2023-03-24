// this one's not working need to work on it

// chocolate rapper problem
/* you have 15 rupees, 1 rupee = 1 chocolate and 3 rapper = 1 chocolate
 how many chocolates can one buy? */

 #include<iostream>
using namespace std;

 int main()
 {

     int money;
     cout<<"enter the amount of money: ";
     cin >> money;

     int choco = 0;
     choco += money;
     int rapper = choco;

     while ( rapper >= 0)
     {

         if( rapper % 3 == 0)
         {
             choco += (rapper/3);
             rapper /= 3;
            
         }

         
         else
         {
             choco += rapper/3;
             int temp=rapper%3;
             rapper = (rapper/3) + temp;
             rapper /= 3;
            
         }
     }

    cout<<" no of chocolates that can be bought = "<<choco<< endl;

 }
