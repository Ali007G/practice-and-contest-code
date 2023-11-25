#include<stdio.h>
int main()
{
    int i;
    float sum=0,a=1.0;

    for(i=1;i<=100;i++)
    {
       sum=1/a+sum;
       a++;
    }
      printf("%.2f\n",sum);
      return 0;
}

