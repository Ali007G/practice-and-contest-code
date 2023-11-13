#include<stdio.h>

void fibonacci(int n)
{
   static int pre=0,cur=1,temp;
    if(n>0)
        {
         temp = pre + cur;
         pre = cur;
         cur = temp;
         printf("%d ",temp);
         fibonacci(n-1);
    }
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    printf("%d %d ",0,1);
    fibonacci(n-2);
  return 0;
 }
