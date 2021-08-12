#include <stdio.h>
#include <math.h>

int isArmstrong(int);
//wrote order as Order
int order(int);

int power(int a, int b)
{
    int ans = 1;
    for (int i = 0; i < b; i++)
    {

        ans *= a;
    }
    printf("%d\n", ans);
    return ans;
}

int main()
{
    int num;
    printf("Enter the number to be checked");
    scanf("%d", &num);
    if (isArmstrong(num) == 1)
        printf("%d is an armstrong number", num);
    else
        printf("%d is not an armstrong number", num);
    return 0;
}

int isArmstrong(int num)
{
    int n;
    n = floor(log10(num)) + 1;
    int temp, sum = 0;
    temp = num;
    while (temp)
    {

        sum += power(temp % 10, n);
        // printf("%d\n", power(temp % 10, n));
        temp = temp / 10;
    }

    if (num == sum)
        return 1;
    else
        return 0;
}

// int order(int num)
// {
//     int n = 0;
//     while (num)
//     {
//         n++;
//         num = num / 10;
//     }
//     printf("%d\n", n);
//     return n;
// }

//gedit filename
//cc filename -lm
//./a.out
