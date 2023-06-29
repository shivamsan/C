#include <stdio.h>
void main()
{
    int a,b,c,i,d,f;


    printf("enter first number");
    scanf("%d" ,&a);

    printf("enter second number");
    scanf("%d" ,&b);

    printf("%d%d \n" ,a,b);

    c = 10*a + b;

    printf("new integer = %d \n",c);

    for(i=c; i<=39;i++)
    {


        d = i/10;
        f = i%10;

        printf("the set of numbers are = %d = %d \n",i,d+f);

        printf("new integer d = %d \n",d);
        printf("new integer f = %d \n",f);

        if( d+f >= 7)
        {
            printf("num whoes sum are greater than 7 are= %d \n",i);

        }



    }




}
