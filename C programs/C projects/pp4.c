#include<stdio.h> 
int main(){ 
    int num,reminder,counter; 
    printf("enter the number which is to be converted: ");
    scanf("%d",&num); 
    for(counter=1;counter<=num/1000;counter++) 
        printf("M"); 
    reminder = num%1000; 
 
    for(counter=reminder/900;counter==1;counter++) 
        printf("CM"); 
    reminder = reminder%900; 
 
    for(counter=reminder/500;counter==1;counter++) 
        printf("D"); 
    reminder = reminder%500; 
 
    for(counter=reminder/400;counter==1;counter++) 
        printf("CD"); 
    reminder = reminder%400; 
 
    for(counter=1;counter<=reminder/100;counter++) 
        printf("C"); 
    reminder = reminder%100; 
 
    for(counter=reminder/90;counter==1;counter++) 
        printf("XC"); 
    reminder = reminder%90; 
 
    for(counter=reminder/50;counter==1;counter++) 
        printf("L"); 
    reminder = reminder%50; 
 
    for(counter=reminder/40;counter==1;counter++) 
        printf("XL"); 
    reminder = reminder%40; 
 
    for(counter=reminder/10;counter>=1;counter--) 
        printf("X"); 
    reminder = reminder%10; 
 
    for(counter=reminder/9;counter==1;counter++) 
        printf("IX"); 
    reminder = reminder%9; 
 
    for(counter=reminder/5;counter==1;counter++) 
        printf("V"); 
    reminder = reminder%5; 
 
    for(counter=reminder/4;counter==1;counter++) 
        printf("IV"); 
    reminder = reminder%4; 
 
    for(counter=reminder;counter>=1;counter--) 
        printf("I"); 
} 