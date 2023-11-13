#include <stdio.h>

void print(int cur, int limit);
int main()
{
    int n1, n2;
    printf("Enter lower number: ");
    scanf("%d", &n1);
    printf("Enter higher number: ");
    scanf("%d", &n2);

    printf("odd Numbers are: ", n1, n2);
    print(n1, n2);
    return 0;
}

void print(int cur, int limit)
{
    if(cur > limit)
        return;
    printf("%d, ", cur);
    print(cur + 2, limit);
}
