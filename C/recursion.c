#include <stdio.h>
void dec_to_bin(int);
int fibonaci(int);

void dec_to_bin(int n){
    if(n==1){
        printf("1");
        return ;}
    dec_to_bin(n/2);
    printf("%d",n%2);
}

int fibonaci(int n)
{
    if(n==1||n==2){
        
        return 1;
         
    }
    return fibonaci(n-1)+fibonaci(n-2);

}    


int main(){
    int i;
    //dec_to_bin(55);
   for(i=1;i<21;i++){
    printf("%d", fibonaci(i));
   }
    return 0;
}

