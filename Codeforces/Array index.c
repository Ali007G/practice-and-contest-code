#include<stdio.h>
int main()
{
int array2[20], i, n;
    printf("Enter value:");
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
