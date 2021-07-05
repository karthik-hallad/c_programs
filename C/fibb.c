#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,n;
    printf("How many numbers you want to print\n");
    scanf("%d", &n);
    int a[n];
    a[0] = 0;
    a[1] = 1;
    for ( i = 2; i <n ; i++)
    {
       a[i] =a[i-1]+a[i-2];
    }
     printf("The fibonnaci series is\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}
