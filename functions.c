#include <stdio.h>

void add();
void sub();

void main()
{
    int ch;

    do
    {
        printf("\n\n\t\t 1. Addition");
        printf("\n\n\t\t 1. Subtraction");
        printf("\n\n\t\t 3. Exit");

        printf("\n\n\t\t Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            {
                printf("\n");
                add();
                break;
            }
        case 2:
            {
                printf("\n");
                sub();
                break;
            }
        case 3:
            {
                exit(0);
            }
        }
    }
    while(ch!=3);
}
void add()
