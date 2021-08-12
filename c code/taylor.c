#include <stdio.h>

void main()
{
    //forgot to assign float to x
    //be careful of data types
    int i, n;
    float t, sum, x;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the value of x\n");
    scanf("%f", &x);
    //forgot to convert it to radian
    x = (x * 3.14) / 180;
    sum = x;
    t = x;

    //forgot to start i from 1 and till i=n
    for (i = 1; i <= n; i++)
    {
        t = ((t * (-1) * (x) * (x)) / (2 * i * (2 * i + 1)));
        sum += t;
    }
    printf("The sum of the sin series %f", sum);
}
