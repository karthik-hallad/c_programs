#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    //alwasys assign it to a file pointer then fputc
    fp=fopen("D:\\studies\\VS CODE\\C\\files\\file.txt","w");
    if(fp==NULL){
        return NULL;
    }
    fputc('a',fp);



    //fgetc gets the first char then takes the cursor to the next one
        FILE *fp1;
    fp1=fopen("D:\\studies\\VS CODE\\C\\files\\file2.txt","r");
    char ch;
    ch=fgetc(fp1);
    while(!feof(fp1)){//feof return true if end of file encountered
        printf("%c",ch);
        ch=fgetc(fp1);
    }

    //fgets can be used to write the file in a char array
    //before we need to seek it at the beginning
    fseek(fp1,7,SEEK_SET);//0 byters moved after seeking it to 0///7 movies it by 7 char
   //this only prints the first line if u want full
   //do the same thing..ie....while until feof==1
    char ch1[80];
    fgets(ch1,80,fp1);
    printf("%s",ch1);
    
    fclose(fp1);



    return 0;
}