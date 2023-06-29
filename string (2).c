#include <stdio.h>
#include <string.h>

void main()
{
    int n;
    char a[50];
    char *p,*q;

    printf("\n enter a name ");
    
    scanf("%s", &a);

    n = strlen(a);
    printf(" length: %d \n",n);

    p = a;
    q = a+ n;
    q=q-1;

    printf("address: %u \n",p);
    printf("address: %u \n \n\n",q);

    while(p<=q)
    {

        printf("address: %u \n",*p);
        printf("address: %u \n",*q);

        if(*p==*q)
        {
            p++;
            q--;

        }
        else
        {

            break;
        }
    }

    if(p>q)
    {

        printf("palindrome \n");

    }
    else
    {

        printf("not palindrome \n");
    }













}

