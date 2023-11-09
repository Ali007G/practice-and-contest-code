// Currency Convert-O-Matic

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    long long int ancient_cur;
    double exchange_rate, home_cur;

    scanf("%lld", &ancient_cur);
    scanf("%lf", &exchange_rate);

    home_cur=ancient_cur*exchange_rate;
    printf("%.4lf\n", home_cur);

    return 0;
}
