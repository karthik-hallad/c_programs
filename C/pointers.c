#include<stdio.h>
#include <stdlib.h>
int ** allocate(int n,int m){
    int **p;//**p makes it posssible also
    int p=(int *)malloc(n*sizeof(int));
    int i,j;
    for(i=0;i<n;i++){
        *(p+i)=(int *)malloc(m*sizeof(int));//allocating the colums
    }
    scanf("%p",&p[i][j]);
}   

int main(){
    int **k,*p;
    int x=25;
    k=&p;
    p=&x;
    printf("%d %d %d\n",k,*k,**k);
    if (sizeof(double*)==sizeof(float))
        printf("Equal values\n");
    int *t=(int *)1000;
    printf("%d",t);//*t is unknows this is only used to store the adress of the constant

    //void pointer
    void *vp;
    int y=100;
    vp=&y;//-->this only keeps the adress of the var not the vlaue so it cant be extracted

    printf("%d %d",*((int *)vp),(int *)vp);
    //basically making vp as int pointers
    //2-D array
    int *b[3];//3 rows
    int c[20]={5,3,6,9},d[20]={5,8,6,5},e[20]={8,9,5,2};//4 colums equal in len
    b[0]=c;
    b[1]=d;
    b[2]=e;
    printf("\n%d %d %d %d %d %d",b,b+1,b+2,*(b+1),*(b+1)+1,*(*(b+1)+1));


    //allocate dyn
    allocate(3,4);

    return 0;
}

