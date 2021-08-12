#include <stdio.h>

void main()
{
    int i, n, sum = 0;
    int *ptr, a[n];
    printf("Enter number of elements in the array:\n");
    scanf("%d", &n);
    ptr = a;
    //forgot to input the elements of the array
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of a[%d]", i);
        //dont forgot to write a[i] instead of a+i
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        //dont forget to write *ptr here
        sum += *ptr;
        ptr++;
    }
    printf("The sum is %d", sum);
}
