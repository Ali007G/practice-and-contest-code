#include<stdio.h>
int main()
{
      int i,n,max,min,a[100],temp;
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
          printf("Min:%d\n", min);
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
