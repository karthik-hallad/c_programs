#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc,char** argv){
     
    //argv converts to strary and stores directly if it is "a.exe" it stores as a/./e/x/e
    int i=argc;
    printf("%d",i);
    //to acess argv we use for loop..acc to char pointer 
    //array we can acess the first//second rows by using char[i]
    for (i=0;i<argc;i++)
    {
        printf("argv[%d]=%s\n",i,argv[i]);
    }

    ///for sum
    int sum=0;
    for(i=1;i<argc;i++)
    {
        //problem is when it stores value it does in form of string
        //so we need to convert to integers we do it using
        // atof,atol,atod using stdlib.h
        sum+=atoi(argv[i]);
    }
    printf("%d",sum);
 
    }