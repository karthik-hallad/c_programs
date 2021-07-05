#include <stdio.h>
#include <stdarg.h>

int sum(int count,...){
    int sum=0;
    va_list ap;
    //va_list is for creating a list
    va_start(ap,count);
    //va_start is for taking in the vlaues of list
    int i;
    for(i=1;i<=count;i++)
    {
        sum=sum+va_arg(ap,int);
        //va_arg is for assinng and it does that automatically...but everytime it increass the varialbe
        //index by 1 so we need a for loop
    }
    va_end(ap);
        return sum;
}

int main(){
    int k;
    // we are returning something through sum so we always assign it to var then print it
    
    k=sum(5,3,3,3,3,4);
    printf("%d",k);
}