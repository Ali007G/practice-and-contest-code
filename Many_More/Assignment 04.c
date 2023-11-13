#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d;
    char sign1,sign2,sign3;
    double x1,x2;
    printf("\t\t\t\tEquation Solver V1.1\n");
    printf("\t\t\t\t====================\n\n\n");

    printf("a: ");
    scanf("%lf",&a);
    printf("b: ");
    scanf("%lf",&b);
    printf("c: ");
    scanf("%lf",&c);

    if(a>=0)
        sign1=' ';
    else
        sign1='-';

    if(b>=0)
        sign2='+';
    else
        sign2='-';

    if(c>=0)
        sign3='+';
    else
        sign3='-';

    printf("\n\n\nEquation: %c%dx^2 %c %dx %c %d = 0\n\n\n\n",sign1,abs(a),sign2,abs(b),sign3,abs(c));


    d = pow(b,2) - 4*a*c;
    printf("Solution:\n");
    if(d>0)
    {
        x1 = (-b+sqrt(d))/2*a;
        x2 = (-b-sqrt(d))/2*a;
        printf("x1 = %.2lf\n",x1);
        printf("x2 = %lf\n",x2);
    }
    else if(d==0)
    {
        x1 = -b/(2*a);
        printf("x = %lf\n",x1);
    }
    else
    {

        x1 = (-b)/(2*a);
        x2 = sqrt(-d)/(2*a);
        if(x2>=0)
        {
            printf("x1 = %.2lf + %.2lfi\n",x1,fabs(x2));
            printf("x1 = %.2lf - %.2lfi\n",x1,fabs(x2));
        }
        else
        {
            printf("x1 = %.2lf - %.2lfi\n",x1,fabs(x2));
            printf("x1 = %.2lf + %.2lfi\n",x1,fabs(x2));
        }

    }
    printf("\n\n\n\n----------------------\n\n");
    return 0;

}
