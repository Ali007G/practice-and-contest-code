#include<stdio.h>
#include<stdlib.h>

char findprime(int x)
{
    int i,flag=0;
    for(i=2;i<x;i++)
    {
        if((x%i)==0)
        {
            flag=1;
            break;
        }
        if(flag==0)
         return 'p';
        else
        return 'n';
    }
    {
        int main(void)
        {
            int a;
            char result;
            scanf("%d", &a);
            result=findprime(a);
            if(result='p')
            printf("prime");
            else if(result='n')
            printf("not prime");
        }

    }
}
