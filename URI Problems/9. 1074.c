#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    switch(N>0)
    {
  case 1:
       switch(N%2==0)
      {
  case 1:
       printf("EVEN POSITIVE\n");
      break;
      default:
      printf("ODD POSITIVE\n");
      break;
      }
      break;
     default:
      switch(N==0)
    {
  case 1:
      printf("NULL\n");
      break;
      default:
      switch(N%2==0)
    {
  case 1:
      printf("EVEN NEGATIVE\n");
      break;
      default:
      printf("ODD NEGATTIVE\n");
      break;
      }
    }
  }
     return 0;
}
