#include<stdio.h>
int main()
{
    int n,a,i,sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
{
        scanf("%d", &a);
        sum=sum*i;
        printf("%d\n", sum);
}
}
