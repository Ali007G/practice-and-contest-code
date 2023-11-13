#include<stdio.h>
int main()
{
      int a[50];
      int b,i,j,n;
      printf("Enter number: ");
      scanf("%d", &n);
      printf("Enter array elements:\n");
        for(i=0;i<n;i++)
    {
        printf("Original array %d:", i+1);
        scanf("%d", &a[i]);
    }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    b=a[j];
                    a[j]=a[j+1];
                    a[j+1]=b;
                }
            }
        }
        for(i=0;i<n;i++)
            printf("a[%d]=%d ", i,a[i]);
}

