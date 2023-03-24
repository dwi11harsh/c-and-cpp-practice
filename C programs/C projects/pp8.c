#include<stdio.h>
int sub();
int add();
void main()
{
    int x, y, z;
    x = add();
    y = sub();
    z = printf("lnu cse");
    printf(" %d %d %d ", x, y, z);
}
int add(){
    int a=10, b=8, c;
    c = a+b;
    return c;
}
int sub(){
    int a = 20, b = 15, c;
    c = a-b;
    return c;
}