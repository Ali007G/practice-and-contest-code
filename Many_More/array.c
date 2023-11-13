/*#include<stdio.h>
int main()
{
    int i,n,a[20],sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter array elements:\n ");
    for(i=0;i<n;i++)
    {
        printf("Enter array elements%d:", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("\nsum of array elements: %d", sum);
}
*/
#include<stdio.h>
int main()
{
    int n,sum=0,a[10];
    for(int i=0;i<=9;i++)
    {
        printf("Enter a[ %d ]: ", i);
        scanf("%d", &a[i]);
    }
    for(int i=0;i<=9;i++)
        sum=sum+a[i];
    printf("The sum is: %d\n", sum);
}

