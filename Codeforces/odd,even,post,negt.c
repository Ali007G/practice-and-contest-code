#include<stdio.h>
int main()
{
    int i,n,a,count;
    scanf("%d", &n);
   scanf("%d", &count);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &a);
        if(count<a)
            count=a;
}
        printf("%d", n,count);
     return 0;
}
