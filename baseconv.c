#include<stdio.h>

void baseconv (int n, int b)
{
    if(n/b==0)
    {
        printf("%d",n);
        return;
    }
    baseconv(n/b,b);
    int a=n%b;
    printf(",%d",a);
    return;
}
main()
{
  int n,b;
  printf("Enter the values of number and base\n");
  scanf("%d%d",&n,&b);
  printf("\n");
  baseconv(n,b);
}
