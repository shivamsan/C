#include<stdio.h>
void main()
{
    int n,i,m;
    i=0;
    printf("Program to print multiplication table of any number \n");
    printf("enter any number: ");
    scanf("%d" , &n);
    while (i<=10)
    {
        m= i*n;

        printf("%d * %d = %d \n",n,i,m);
        i++;
    }
}
