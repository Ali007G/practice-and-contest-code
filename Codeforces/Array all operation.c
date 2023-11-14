#include<stdio.h>
#include<stdlib.h>
void operation_1()
{
      int i,n,a[20];
      float avg, total,sum=0;
      printf("Enter number: ");
      scanf("%d", &n);
      printf("Enter array elements:\n");

        for(i=0;i<n;i++)
      {
         printf("Enter element %d: ",i+1);
         scanf("%d", &a[i]);
         sum=sum+a[i];
       }
         avg=sum/n;
         printf("average: %.2f", avg);
}
void operation_2()
{
  {
      int i,n,max,min,a[20];
      printf("Enter number: ");
      scanf("%d", &n);
      printf("Enter array elements:\n");

        for(i=0;i<n;i++)
    {
        printf("Enter element %d:", i+1);
        scanf("%d", &a[i]);
    }
       max=a[0];
       min=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
                max=a[i];
            if(a[i]<min)
                min=a[i];
        }
          printf("Max:%d\n", max);
         // printf("Min:%d\n", min);
 {
          for(i=0;i<n;i++)
            printf("a[%d]=%d ", i,a[i]);
}
              for(i=0;i<n;i++)
 {
              if(a[i]==max)
                 a[i]=min;
}
            for(i=0;i<n;i++)
            printf("\n%d", a[i]);
}
}
void operation_3()
{
    int a[20],i,n;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==i)
        {
            printf("%d", i);
        }
    }
}
int main()
{
    int n;
    printf("Enter the number that you want to operation: ");
    scanf("%d", &n);
    if(n==1)
    {
        operation_1();
    }
    else if(n==2)
    {
        operation_2();
    }
    else
        operation_3();
    return 0;
}
