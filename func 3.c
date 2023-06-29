#include <stdio.h>
void greatNum(int a, int b);

void main()
{
    int p,q;
    printf("\n\n\t\t Enter Number ");//fun dec
    scanf("%d%d", &p,&q);
    greatNum(p,q);// fun call
}

void greatNum(int a, int b)//fun def
{
    if(a>b)
    {
        printf("\n\n\t\t number %d is greater than %d ",a,b);

    }
    else
    {
        printf("\n\n\t\t number %d is greater than %d ",b,a);
    }
}
