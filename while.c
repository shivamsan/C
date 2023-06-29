#include<stdio.h>
void main()
{
    int n,i,m;
    i=0;
    printf("enter number");
    scanf("%d" , &n);
    while (i<=10)
    {
        m= i*n;

        printf("%d ",n);
        printf("* ");
        printf("%d ",i);
        printf("= ");
        printf("%d \n",m);




        i++;
    }
}
