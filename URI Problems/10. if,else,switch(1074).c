#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
       switch(n==0)
{
    case 1:
       printf("NULL\n");
       break;
    case 0:
       switch(n%2==0)
{
    case 1:
    if(n>0)
       printf("EVEN POSITIVE\n");
    else
       printf("EVEN NEGATIVE\n");
       break;
    case 0:
    if(n>0)
       printf("ODD POSITIVE\n");
    else
       printf("ODD NEGATIVE\n");
       break;
       default :
       printf("wrong input");
}
}
    return 0;
}

