#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int sum=0;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    {
        if(a%2==0)
            sum++;


       else if(b%2==0)
            sum++;


       else if(c%2==0)
            sum++;


       else if(d%2==0)
            sum++;


        else if(e%2==0)
            sum++;
   }
    printf("%d valores pares\n", sum);
    return 0;
}
