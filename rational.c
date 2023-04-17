#include<stdio.h>

int gcd(int a, int b)
{
    int rem,div,temp;
    if(a<b)
       {
         rem=a;
         div=b;
       }
    else if(a>b)
    {
        rem=b;
        div=a;
    }
    else
        return a;
    while(rem>0)
    {
        temp=rem;
        rem=div%rem;
        div=temp;
    }
    return temp;
}

int printRational(int B)
{
    int i,j,k=0,dif=1,count=0,total=0,flag=0;
    printf("Rational numbers <=1:\n");
    printf("1/1   0/1   ");
    for(i=1;i<=B-1;i++)
    {
        j=1;k=0;
        while(k<B)
        {
            k=j+dif;
            if(gcd(k,j)==1)
            {printf("%d/%d   ",j,k);
             count++;
             total++;
             flag++;
             if(flag==8)
             {
               if(count==8)
               {
                 printf("\n");
                 count=0;
               }
             }
             if(flag>8)
             {


             if(count==10)
             {
                 printf("\n");
                 count=0;
             }
             }

            }
            j++;
        }
        dif++;
    }




    k=0;dif=1;count=0;
    printf("\n\nRational numbers >1: \n");
    for(i=1;i<=B-1;i++)
    {
        j=1;k=0;
        while(k<B)
        {
            k=j+dif;
            if(gcd(k,j)==1)
            {printf("%d/%d   ",k,j);
             count++;
             total++;
             if(count==10)
             {
                 printf("\n");
                 count=0;

             }

            }
            j++;
        }
        dif++;
    }
    return total+2;

}

main()
{
    int bound,temp;
    printf("Enter the Bound B\n");
    scanf("%d",&bound);
    temp=printRational(bound);
    printf("\n\nTotal number of rational numbers = %d",temp);
}
