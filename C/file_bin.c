#include <stdio.h>
#include <stdlib.h>

int main(){
    //fread and fwrite
    //fwrite(void pointerof var,size,no,fp)
    int ch[5]={3,5,8,10,12};
    int ch2[3];
    FILE *fp;
    fp=fopen("D:\\studies\\VS CODE\\C\\files\\file32.txt","wb");
    int i=fwrite((void *)ch+1,sizeof(int),3,fp);
    printf("%d\n",i);//fwrite reutrns no of elements it printed
    
    //ftell returns no of bytes written
    int size=ftell(fp);
    printf("%d\n",size) ;//finds size till where the seek is situated
    
    //if opneed in txt editor no use so we need to read it
    
    fread((void *)ch2,sizeof(int),3,fp);
    int j;
    for(j=0;j<3;j++)
    {
        printf("%d\n",ch2[j]);
    }

    return 0;    
}