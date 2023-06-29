#include <stdio.h>
#define max 20000
void main()
{
    int u;
    int p;
    printf("\n\n\t\t\t Welcome to ATM \n");
    printf("Enter your username: ");
    scanf("%d",&u);
    printf("Enter your password: ");
    scanf("%d",&p);
    if(u == 123 && p == 1234)
    {
        int c,a,r,m;
        printf("\n\n\t\t 1. Width");
        printf("\n\n\t\t 2. Balence Check");
        printf("\n\n\t\t 3. Detail");
        printf("\n\n\t\t 4. Deposite");
        printf("\n\n\t\t 5. Help \n");

        printf(" Enter option: ");
        scanf("%d",c);

        switch (c)
        {
            case 1:
            {
                printf("\n\n\t\t Enter Amount: ");
                scanf("%d ", a);
                // r = m - a;
                printf("\n\n\t\t Width amount is : %d", r);
                break;
            }
        }
    }
    else
    {
        printf("wrong password or username");
    }
}
