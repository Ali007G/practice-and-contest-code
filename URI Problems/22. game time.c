#include<stdio.h>
int main()
{
    int startT,endT,duration;
    scanf("%d %d", &startT,&endT);
    duration=endT-startT;

    if(duration<0)
    {
        duration=24+(endT-startT);
    }
    if(startT==endT)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
       printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}
