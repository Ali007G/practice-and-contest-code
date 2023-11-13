#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d;
    float root1, root2, realPart, imagPart;
    char op1,op2,op3;
    printf("\t\tEquation Solver V1.1\n");
    printf("\t\t====================\n\n");

    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("c: ");
    scanf("%f",&c);

    if(a>=0)
        op1=' ';
    else
        op1='-';
    if(b>=0)
        op2='+';
    else
        op2='-';
    if(c>=0)
        op3='+';
    else
        op3='-';
    printf("\n\nEquation: %c%dx^2 %c %dx %c %d = 0\n\n", op1,abs(a),op2,abs(b),op3,abs(c));

    d=b*b-4*a*c;
    printf("\nSolution:\n");
    if(d>0)
    {
        root1 = (-b + sqrt(d))/(2 * a);
        root2 = (-b - sqrt(d))/(2 * a);
        printf("x1 = %.2f", root1);
        printf("x2 = %.2f", root2);
    }
    else if(d==0)
    {
        root1 = root2 = -b/(2 * a);
        printf("x1 = x2 = %.2f;", root1);
    }
    else
    {
        realPart = -b/(2 * a);
        imagPart = sqrt(-d)/(2 * a);
        if(imagPart>=0)
            {
                printf("x1 = %.2f + %.2fi\n", realPart, fabs(imagPart));
                printf("x1 = %.2f - %.2fi\n", realPart, fabs(imagPart));
            }
        else
            {
                printf("x1 = %.2f - %.2fi\n", realPart, fabs(imagPart));
                printf("x1 = %.2f + %.2fi\n", realPart, fabs(imagPart));

            }
    }
            printf("\n\n---------------");
    return 0;
}

