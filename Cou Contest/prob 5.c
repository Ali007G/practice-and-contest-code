// Average

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    long int num1, num2;
    double avg;

    scanf("%ld %ld", &num1,&num2);
    avg=(num1+num2)/2.0;

    printf("%.2lf\n", avg);
}


