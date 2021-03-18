#include<stdio.h>
void mul(int a, int b)
{
    printf("\nMul = %d",(a*b));
}
void div(int a, int b)
{
    printf("\nMul = %d",(a/b));
}
int sub(int a, int b)
{
    return a-b;
}

int sum(int a,int b)
{
    return a+b;
}
int main()
{
    printf("hello ripon");
    printf("\nSum = %d",sum(2,3));
    printf("\nSub = %d\n",sub(5,2));
    mul(4,2);
    div(9,3);
    return 0;
}
