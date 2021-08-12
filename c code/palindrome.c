#include <stdio.h>
#include <string.h>
void check(char[], int);
int main()
{
    char str[20];
    printf("Enter a string: \n");
    scanf("%s", str);
    check(str, 0);
    return 0;
}

void check(char str[], int index)
{
    int len = strlen(str) - (index + 1);
    if (str[len] == str[index])
    {
        if ((index + 1 == len) || (index == len))
        {
            printf("The word is a Palindrome");
            //forgot to write return..it will give wrong output
            return;
        }
        check(str, index + 1);
    }
    else
    {
        printf("The word is not palindrome.");
        return;
    }
}