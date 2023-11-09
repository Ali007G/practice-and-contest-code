// Perfect Square 23

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int num1, temp;
    scanf("%d", &num1);

    temp=sqrt(num1);
    if(temp*temp==num1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;

}

