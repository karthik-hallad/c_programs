#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, ch;
    printf("Enter any two numbers");
    scanf("%d%d", &a, &b);
    printf("What Operation You want to perform\n1-Addition\n2-Subtraction\n3-multiplication\n4-division\n5-modulo\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        if (b != 0)
        {
            c = a / b;
        }
        else
        {
            printf("division by zero not possible");
            //even with div by zero put exit
            exit(0);
        }
        break;
    case 5:
        c = a % b;
        break;
    default:
        printf("Sorry the operation cannot be performed");
        exit(0);
    }

    printf("The result is %d", c);
}