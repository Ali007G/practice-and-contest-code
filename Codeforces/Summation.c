#include<stdio.h>
int main()
{
    long long int i,N,sum=0;
    scanf("%lld",&N);
    for(i=1;i<=N;i++)
{
        sum=sum+i;
}
     printf("%lld\n",sum);
}

/*
#include<stdio.h>
int last(int x,int y)
{
    x=abs(x);
    y=abs(y);
    return x%10+y%10;
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", last(a,b));
}
*/
