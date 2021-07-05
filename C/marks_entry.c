#include<stdio.h>
#include <stdlib.h>

typedef union { 
    int maths;
    int bio;
}opt;


typedef struct{
    int roll;
    char name[20];
    int phy,chem;
    opt i;
}stu;

char input(stu *s){
    char temp;
    printf("Enter your name: \n");
    scanf("%[^\n]",s->name);
    printf("Enter your roll: \n");
    scanf("%d",&s->roll);
    printf("Enter your marks in chem: \n");
    scanf("%d",&s->chem);
    printf("Enter your phy: \n");
    scanf("%d",&s->phy);
    printf("Enter your opt(m or b): \n");
    scanf(" %c",&temp);
    if(temp=='m')
    {
        printf("Enter your marks in math\n");
        scanf("%d",&s->i.maths);
        }    
     else if(temp=='b')
    {
        printf("Enter your marks in bio\n");
        scanf("%d",&s->i.bio);
        }     
    else 
    {
        printf("ERROR IN INPUT");
        exit(0);
    }   
    return temp; 
}


void print_stu(stu s,char temp){
    printf("\n");
    printf("-----MARKS FOR STUDENTS-----\n");
    printf("Name : %20s\n",s.name);
    printf("Roll No: %15d\n",s.roll);
    printf("Physics: %15d\n",s.phy);
    printf("Chem: %18d\n",s.chem);
    printf("%c",temp);
    if(temp=='m')
    printf("Maths: %17d\n",s.i.maths);
    else
    printf("Bio: %19d\n",s.i.bio);
    
}
    
int main(){
    stu s1;
    stu *s;
    char temp;
    s=&s1;
    input(&s1);
    print_stu(s1,temp);



}
