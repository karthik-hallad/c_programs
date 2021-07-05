#include <stdio.h>
#include <stdlib.h>

int main(){
    //malloc always returns void pointer-->so we explicitly cast it
    int *p=(int *)malloc(sizeof(int)*5);//assigns 5 bytes and p stores value of first byte
    //in such functions alwys improtant to set up NULL
    if (p==NULL)
        exit (1);
    //deallocate when job done
    free(p);    

    //calloc assigns all as 0
    int *k=(int *)calloc(5,sizeof(int));
    
    //realloc
    int *l=(int *)realloc(k,sizeof(int)*8);
    //can allocate other bytes using normal methods
    return 0;
}