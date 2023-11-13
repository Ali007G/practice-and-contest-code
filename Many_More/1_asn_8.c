#include<stdio.h>

int get_gcd(int a, int b);
int main()
{
   int num1,num2;
   printf("Enter the two integers: ");
   scanf("%d%d",&num1,&num2);
   printf("gcd of two integers %d and %d is %d",num1,num2,get_gcd(num1,num2));
   return 0;
}

int get_gcd(int a, int b)
{
   if(b>a)
      return get_gcd(b,a);
   if(b==0)
      return a;
   else
      return get_gcd(b,a%b);
}
