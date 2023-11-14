#include<stdio.h>
int main()
{
    int i,n,a[20];
    float avg, total,sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter array element:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d", &a[i]);
       sum=sum+a[i];
    }
       avg=sum/n;
     printf("average: %.2f", avg);


}
