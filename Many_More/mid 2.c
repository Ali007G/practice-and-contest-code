/*
  // previous year ques
#include<stdio.h>
int main()
{
    int i,j,k,count;
    count =0;

    for(i=0;i<5;i++)
    {
        for(j=2;j<5;j++)
        {
            count++;
        }
    }
    printf("%d", count);
    return  0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=2;i++)
    {
        printf("outer loop start\n");
        for(j=1;j<=3;j++)
        {
            printf("***** inner loop\n");
        }
        printf("outer loop end\n");
    }
}
*/
/*
  //Pattern
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}
*/
/*
  //Pattern
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
*/
/*#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            //printf("%d ", j);
            printf("%d ", i);
        }
        printf("\n");
    }
}
*/
/*
  // GCD
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter value of a,b: ");
    scanf("%d%d", &a,&b);
    c=b%a;
    while(c!=0)
    {
        b=a;
        a=c;
        c=b%a;
    }
    printf("Result is =%d ",a);
}
*/
/*
  // Bubble Sort
#include<stdio.h>
int main()
{
      int a[5];
      int b,i,j,n;
      printf("Enter number: ");
      scanf("%d", &n);
      printf("Enter array elements:\n");
        for(i=0;i<n;i++)
    {
        printf("Enter element %d:", i+1);
        scanf("%d", &a[i]);
    }
        for(i=0;i<n-1;i++) //6
        {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1]) //101 > 77
                {
                    b=a[j]; //temp=a 77,
                    a[j]=a[j+1]; //a=b
                    a[j+1]=b; //b=temp
                }
            }
        }
        for(i=0;i<n;i++)
            printf("a[%d]=%d ", i,a[i]);
}


*/

/*
 //Function
#include<stdio.h>
//global
int add(int a, int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int x=add(10,20);
    printf("Addition is: %d", x);
}
*/
