#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

double sum(char *format,...){
    double sum=0;
    va_list ap;
    //va_list is for creating a list
    va_start(ap,format);
    //va_start is for taking in the vlaues of list
    int i;
    for(i=1;i<=strlen(format);i++)
    {
        char ch=format[i-1];
        switch(ch){
            case 'i': sum+=va_arg(ap,int);
                      break;
            case 'f':sum+=va_arg(ap,double);
            //as per the new c rules even the floating point numbers should be refered to as double
                      break;
            case 'd': sum+=va_arg(ap,double);
                      break;
            default : printf("ERROR IN FORMAT");
                      printf("%d",strlen(format));
                      printf("%d",i) ; 
                      exit(0);                                                  
        }
        //va_arg is for assinng and it does that automatically...but everytime it increass the varialbe
        //index by 1 so we need a for loop
    }
    va_end(ap);
        return sum;
}

int main(){
    double k;
    // we are returning something through sum so we always assign it to var then print it
    
    k=sum("idffdi",3,3.553,35.23f,3.0f,42.36,550);
    printf("%lf",k);
}