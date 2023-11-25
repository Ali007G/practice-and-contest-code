#include<stdio.h>
int main()
{
    int i,N,sum=1;
    scanf("%d",&N);

    for(i=N;i>=1;i--)
    {
        sum=sum*i;
    }
    printf("%d\n",sum);
    return 0;
}
