#include <stdio.h>
void main()
{
    int i,d,f,sum=0;
    for(i=24; i<=39;i++)
    {
        d = i/10;
        f = i%10;
        printf("the set of numbers are: \t\t %d = %d \n",i,d+f);
    }
    printf("\n");
        for(i=24; i<=39;i++)
    {
        d = i/10;
        f = i%10;
        if( d+f >= 7)
        {
            printf("num whose sum of digits are greater than 7 are: %d \n",i);
            sum=sum+i;
        }
    }
    printf("\n");
    printf("sum of numbers whose sum of digits are greater than 7: %d ",sum);
}
