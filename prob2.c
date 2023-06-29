#include <stdio.h>
void main()
{
    int i,a,b,l,d,f,sum=0;

    printf("enter upper limit \n");
    scanf("%d",&a);

    printf("enter lower limit \n");
    scanf("%d",&b);

    printf("enter limiter variable \n");
    scanf("%d",&l);


    for(i=a; i<=b;i++)
    {
        d = i/10;
        f = i%10;
        printf("the set of numbers are: \t\t %d = %d \n",i,d+f);
    }
    printf("\n");
        for(i=a; i<=b;i++)
    {
        d = i/10;
        f = i%10;
        if( d+f >= l)
        {
            printf("num whose sum of digits are greater than 7 are: %d \n",i);
            sum=sum+i;
        }
    }
    printf("\n");
    printf("sum of numbers whose sum of digits are greater than 7: %d ",sum);
}
