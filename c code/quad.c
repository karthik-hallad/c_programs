#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, disc, root1, root2;
    printf("enter a,b,c \n");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0 && c == 0)
    {
        printf("invalid root\n");
        exit(0);
    }
    else if (a == 0 && b != 0)
    {
        // root is not -b / 2a it is - c / b
        printf("Liner root is %f\n", (-c / b));
    }
    else
    {
        disc = b * b - (4 * a * c);
        if (disc > 0)
        {
            root1 = ((-b) + sqrt(disc)) / (2 * a);
            root2 = ((-b) - sqrt(disc)) / (2 * a);
            printf("The roots and distinct and real\n");
            printf("The roots are %f and %f\n", root1, root2);
        }
        else if (disc == 0)
        {
            root1 = root2 = (-b) / (2 * a);
            printf("the roots are equal and real\n");
            printf("The roots are %f and %f\n", root1, root2);
        }
        else
        {
            root1 = (-b) / (2 * a);
            //also add things like roots are imaginary and distinct
            // remember to add abs(disc) to make disc positive
            root2 = (sqrt(abs(disc))) / (2 * a);
            printf("The roots are imaginary and distinct\n");
            printf("The root 1 is %f+i%f\n", root1, root2);
            printf("The root 2 is %f-i%f\n", root1, root2);
        }
    }

    return 0;
}