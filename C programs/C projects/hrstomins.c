#include<stdio.h>
int hm(int hrs, int min);
int main()
{
    int hrs, min, res, a;
    printf("\nenter hours:");
    scanf("%d", &hrs);
    printf("\nenter minutes:");
    scanf("%d", &min);
    res = hm(hrs, min);
    printf("%d", res);
}
int hm(int hrs, int min)
{
    int res;
    res = hrs * 60 + min;
    return res;
}