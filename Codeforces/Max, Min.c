#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);

    if(a<b&&a<c)
    printf("%d %d\n", a,c);
    else if(b<c&&b<a)
    printf("%d %d\n", b,a);
    else
    printf("%d %d\n", c,b);
}

