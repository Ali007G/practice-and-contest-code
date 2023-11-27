 //  c program to to perform basic arithmetic operation

#include<stdio.h>
int main()
{
    int num1,num2;
    int sum,sub,mul,mod;           // sum,substract,multiplication,division
    float div;
                                   // input two number from user
    printf("Enter any two number: ");
    scanf("%d %d", &num1, &num2);
                                   // perform arithmetic operation
      sum=num1+num2;
      sub=num1-num2;
      mul=num1*num2;
      mod=num1%num2;
      div=(float)num1/num2;
                                  // print  result of all arithmetic operation
    printf("\nSUM = %d\n", sum);
    printf("DIFFERENCE = %d\n", sub);
    printf("PRODUCT = %d\n", mul);
    printf("QUOTIENT = %.2f\n", div);
    printf("MODULUS = %d\n", mod);

    return 0;
}
