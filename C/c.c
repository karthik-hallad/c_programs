#include <stdio.h>
int main()

{

    int a=5,b=3,c=4,d;

    d=++a-b--*c/a;

    printf("%d\n",d);

    d=a+++--b/b*c;

    printf("%d\n",d);


}