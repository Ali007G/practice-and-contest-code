#include<stdio.h>
int main()
{
    int i,p;

    for(i=1;i<=10000;i++)
    {
         scanf("%d", &p);
        if(p!=2002)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
        }
        if(p==2002)
        {
            break;
        }
    }

    return 0;
}
