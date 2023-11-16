#include<stdio.h>
int main()
{
    int a,b;
    char s;
    scanf("%d %c %d",&a,&s,&b);
    if(a>b && s=='>')
        printf("Right\n");
    else if(a==b && s=='=')
        printf("Right\n");
    else if(a<b && s=='<')
        printf("Right\n");
   else if(a>b && s=='<')
     printf("Wrong\n");
    else if(a<b && s=='>')
       printf("Wrong\n");
    else if(a!=b && s=='=')
       printf("Wrong\n");
    else if(a==b && s=='<')
            printf("Wrong\n");
    else if(a==b && s=='>')
            printf("Wrong\n");
    return 0;
}
