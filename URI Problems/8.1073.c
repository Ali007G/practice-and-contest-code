#include<stdio.h>
int main()
{
    int i,x,n;
    scanf("%d", &n);

    if(5<n && n<5000)
    {
    for(i=2;i<=n;i=i+2)
  {
    x=i*i;
    printf("%d^2 = %d\n",i,x);
  }
    }
    return 0;

}
