#include <stdio.h>

int main()
{
    int i=25, j=35;
    int arr[5] = {10, 20, 30};
    int *p, *q, *arrPtr;
    p = &i;
     q=&j;
    arrPtr= arr;
printf("%d\n", *p);
(*q) ++;

printf("%d\n", j);
arrPtr++;
printf("%d\n", *arrPtr);
for (i=0; i<5; i++)
printf("%d", *(arr+i));

return 0;
}
