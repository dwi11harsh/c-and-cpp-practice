//flow control in loops using break and continue
 // program to tell whether Neha can go out 
 // when neha can only go out in odd dates

 #include<iostream>
 using namespace std;

 int main()
 {
     int pocketMoney = 3000 ;

     for ( int date = 1 ; date <= 30 ; date ++)
     {
         if( pocketMoney == 0 )
              break;
        
        if( date % 2 == 0)
             continue;
        
        cout << date << "  " << pocketMoney << endl ;

        pocketMoney -= 300 ;
            
         
     }

     return 0 ;
 }