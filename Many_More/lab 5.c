#include<stdio.h>
int main()
{
    int a[100],i,j,x=0,y=0,z=0;
    int z1=0,z2=0,z3=0,z4=0,z5=0,z6=0,z7=0;

    for(i=0;i<5;i++)
        scanf("%d", &a[i]);
        {
        if(a[i]>80)
        {
            x++;
          //  printf("A+ ",x);
            //x++;
        }
        else if(a[i]>75)
        {
            y++;
           // printf("A ",y);
        }
        else if(a[i]>70)
        {
            z++;
           // printf("A- ",z);
        }
        else if(a[i]>65)
        {
            z1++;
           // printf("B+ ",z1);
        }
        else if(a[i]>60)
        {
            z2++;
            //printf("B+ ",z2);
        }
        else if(a[i]>55)
        {
            z3++;
           // printf("B- ",z3);
        }
        else if(a[i]>50)
        {
            z4++;
           // printf("C+ ",z4);
        }
        else if(a[i]>45)
        {
            z5++;
           // printf("C ",z5);
        }
        else if(a[i]>=40)
        {
            z6++;
           // printf("C- ",z6);
        }
        else
        {
            z7++;
          //  printf("F ",z7);
        }
    }
    printf("A+ \n",x);
    printf("A \n",y);
    printf("A- \n",z);
    printf("B+ \n",z1);
    printf("B \n",z2);
    printf("B- \n",z3);
    printf("C+ \n",z4);
    printf("C \n",z5);
    printf("D \n",z6);
    printf("F \n",z7);

    return 0;

}
