#include <stdio.h>

int add();

void main(){
   
    int c;
    c=add();
    printf("result is %d",c);
}


int add(){
    int p,x,y;
    x=5; 
    y=6;
    p=x+y;
    return p;
}