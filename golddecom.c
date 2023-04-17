#include<stdio.h>


int isprime(int n)
{
  int k=0,i;
  for(i=2;i<n;i++)
  {
      if(n%i==0)
          k=1;
  }
  if (k==1)
    return 0;
  else
    return 1;
}
int gold_decomposition(int n, int x)
{
     int n1,n2;
     n1=isprime(x);
     n2=isprime(n-x);
     if(n1==1&&n2==1)
        return 1;
     else
        return 0;
}
main()
{
   int B,i,j,count=0;
   printf("Enter the Bound B\n");
   scanf("%d",&B);
   for(i=6;i<=B;i+=2)
   {
       count=0;
       for(j=1;j<=i/2;j++)
       {
           if(gold_decomposition(i,j))
            count++;
       }
       printf("\nNumber of Gold Decompositions of %d are %d",i,count);
   }
}
