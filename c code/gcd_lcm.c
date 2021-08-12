#include <stdio.h>

int find_gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            //always print return here
            return find_gcd(a - b, a);
        }
        else
        {
            return find_gcd(a, b - a);
        }
    }
    return a;
}

int find_lcm(int a, int b)
{
    static int i = 1;
    //wrote a%i not i%a
    if (i % a == 0 && i % b == 0)
        return i;
    i++;
    find_lcm(a, b);
    return i;
}
int main()
{
    int a, b, gcd, lcm;
    printf("Enter any two numbers\n");
    scanf("%d %d", &a, &b);
    gcd = find_gcd(a, b);
    printf("%d %d %d\n", a, b, gcd);
    if (a > b)
    {
        lcm = find_lcm(a, b);
    }
    else
    {
        lcm = find_lcm(b, a);
    }
    printf("%d %d %d\n", a, b, lcm);
}