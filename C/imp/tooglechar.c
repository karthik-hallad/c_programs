#include <stdio.h>

void toogle_char(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)>='A'&&*(p+i)<='Z')
            *(p+i)+=32;
        else if(*(p+i)>='a'&& *(p+i)<='z')
            *(p+i)-=32;
        else 
            continue;    
                
    }
}

void main(){
char str[256]="Helloa WssWsk";
printf("%s\n",str);
toogle_char(str);
printf("%s",str);







}