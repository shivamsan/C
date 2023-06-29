#include<stdio.h>
void main()
{
    int a;
    int b;
    printf("enter numbers \n");
    scanf(" %d%d" ,&a,&b);
    printf("username = %d \n",a);
    printf("password = %d \n",b);




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

