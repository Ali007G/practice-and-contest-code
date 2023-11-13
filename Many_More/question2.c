/*
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d Abracadabra\n",i);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    long long int Number;
    scanf("%lld",&Number);
    for(int i=1;i<=Number;i++)
    {
        printf("%lld Abracadabra\n",i);
    }
    return 0;
}
*/
#include <stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s",str);
   // int m=strlen(str);

    int c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0;

    for(int i=1;i<=str[100];i++)
    {
        if(str[i]=='1')
        {
            c++;
        }
        if(str[i]=='2')
        {
            d++;
        }
        if(str[i]=='3')
        {
            e++;
        }
        if(str[i]=='4')
        {
            f++;
        }
        if(str[i]=='6')
        {
            g++;
        }
        if(str[i]=='7')
        {
            h++;
        }
        if(str[i]=='8')
        {
            i++;
        }
        if(str[i]=='9')
        {
            j++;
        }
        if(str[i]=='0')
        {
            k++;
        }
        if(str[i]=='5')
        {
            l++;
        }
    }

    if(c>d && c>e && c>f && c>g && c>h && c>i && c>j && c>k && c>l)
    {
        printf("1");
    }
    else if(d>e && d>f && d>g && d>h && d>i && d>j && d>k && d>l)
    {
        printf("2");
    }
     else if(e>f && e>g && e>h && e>i && e>j && e>k && e>l)
    {
        printf("3");
    }
    else if(f>g && f>h && f>i && f>j && f>k && f>l)
    {
        printf("4");
    }
     else if(g>h && g>i && g>j && g>k && g>l)
    {
        printf("6");
    }
    else if(h>i && h>j && h>k && h>l)
    {
        printf("7");
    }
    else if(i>j && i>k && i>l)
    {
        printf("8");
    }
    else if(j>k && j>l)
    {
        printf("9");
    }
    else
    {
        printf("0");
    }
    return 0;
}


