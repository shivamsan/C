#include<stdio.h>
void main()
{
    int a;
    printf("enter numbers \n");
    scanf(" %d" ,a);


    if(a%5==0 && a%8==0)
    {
        printf("divisible by both");
    }
    else if (a%5==0)
    {
        printf("divisible by 5");
    }
    else if (a%8==0)
    {
        printf("divisible by 8");
    }
    else
    {
        printf("divisible by none");
    }
}
