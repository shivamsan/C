#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 3 numbers \n");
    scanf(" %d%d%d" ,&a,&b,&c);


    if(a<b)
    {
        if(a>c)
        {
            printf("A is greater");

        }
        else
        {
            printf("C is greater");
        }
    }
    else
    {
        printf("B is greater");
    }
}
