#include<stdio.h>
void operation_1()
{
    int array[50], i, n, sum=0;
    float avg;
    printf("Enter number:");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
        sum=sum+array[i];
    }
    avg=sum/n;
    printf("Average: %0.2f", avg);
}
void operation_2()
{
    int array1[20], i, n, location1=0, location2=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &array1[i]);
    }
    for(i=1; i<n; i++)
    {
        if(array1[i]>array1[location1])
        {
            location1=i;
        }
    }
    for(i=1; i<n; i++)
    {
        if(array1[location2]<array1[location2])
        {
            location2=i;
        }
    }
    for(i=0; i<n; i++)
    {
        if(i==location1)
        {
            printf("%d ", array1[location2]);
            continue;
        }
        printf("%d ", array1[i]);
    }
}
void operation_3()
{
    int array2[20], i, n;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &array2[i]);
    }
    for(i=0; i<n; i++)
    {
        if(array2[i]==i)
        {
            printf(" %d", i);
        }
    }
}
int main()
{
    int n;
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
