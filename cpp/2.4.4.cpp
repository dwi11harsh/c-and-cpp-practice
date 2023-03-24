 //flow control in loops using break and continue
 // program to tell whether Neha can go out 
 // when neha can only go out in odd dates
 
 #include<iostream>
 using namespace std;

 int main()
 {
     int pocketMoney=3000;
     for(int date=1;date<=30;date++)
      {
     if(date%2==0)
     {
         continue;
     }
     pocketMoney=pocketMoney-300;
     if(pocketMoney==0)
        {
         
           break; 
        }
     
         cout<<"You can go out today on the following date"<<endl;
         cout<<date<<endl;
     }
 }