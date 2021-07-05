#include <stdio.h>
  void swaps(int *, int *);

 void swaps(int *a , int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}

 int main(){
int a, b;
int *p=&a,*q=&b;
printf("%d %d\n",a,b);

swaps( p,q);

printf("%d %d",a,b);

 }