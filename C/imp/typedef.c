#include <stdio.h>
typedef struct {
    int date;
    int month;
    int year;
    }date;
    

typedef struct Student{
    int roll;
    char name[128];
    int gp;
    date m;
}Tu;

typedef enum{
    TRUE , FALSE
}Bool;
Bool iseven(){
    if(8%2==0)
        return TRUE;
}
//A POINTER OR VAR USED SHOULD BE DECLARED UNDER STRCUTURE tu

int main(){
Tu s1,s2;
Tu *p; // declared under Tu
p=&s1;
s1.gp=3.5;
s2.roll=2;
printf("ENTER S1 NAME:\n");
scanf("%[^\n]",p->name); //no and needed as we have string array 
scanf("%d %d",&p->roll,&p->m.date);
printf("%s %d %d %d",s1.name,s1.roll,s1.gp,s1.m.date);
//while printing just pass s1 while returning pass the pointer

//union same but only 1 var is assignable

//enum
// void i=iseven();
// printf("%s",i);

}