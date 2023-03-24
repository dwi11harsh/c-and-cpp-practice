//swap using function
#include<stdio.h>
void swap(int, int);
void main()
{
    printf("enter two numbers ");
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    swap(n1, n2);
    printf("\ndigits after swapping in main function are %d and %d", n1, n2);
}
void swap(int n1, int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("\nswapped digits inside the called function");
    printf("\n %d and %d", n1, n2);
}