#include<stdio.h>
int main()
{
    int X,Y,Summation,Multiplication,Subtraction;
    scanf("%d %d", &X,&Y);
    Summation=X+Y;
    Multiplication=X*Y;
    Subtraction=X-Y;

    printf("%d + %d = %d\n", X,Y,Summation);
    printf("%d * %d = %d\n", X,Y,Multiplication);
    printf("%d - %d = %d\n", X,Y,Subtraction);

}
