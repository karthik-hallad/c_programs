#include <stdio.h>

int main(){
    int i,n;
    float x=0,sum,t;

    printf("Enter the value for x: ");
    scanf("%f",&x);
    printf("Enter the value for n: ");
    scanf("%d",&n);

    x=x*3.14159384/180;

    t=x;

    sum=x;

    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        //uses an algorithim and sess that both num and 
        //denominator increase by 2 everytime
        sum=sum+t;
    }
    printf("The value of sin(%f)=%.4f",x,sum);
    return 0;
}