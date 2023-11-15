#include<stdio.h>
int main()
{
    int n,i,index,a[20];
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");

    for(i=0;i<n;i++)
    {
        printf("Enter array elements %d: ", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(index=0;index<n;index++)
            {
            if(a[index]==i)
                printf("%d ", i);
            }
}
}
