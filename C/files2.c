#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    //alwasys assign it to a file pointer then fputc
    fp=fopen("D:\\studies\\VS CODE\\C\\files\\file32.txt","r");
    char name[80];
    int sal;
    double tax_rate,tax,net_sal;
FILE *fp2;
        fp2=fopen("D:\\studies\\VS CODE\\C\\files\\file4.txt","w");
    while(1){
        if(feof(fp)){
            break;
        }
        //fscanf same as fgets but works with fprintf..also more costomizable
        //like assigns multiple variables depending upon inputs like comma
        //lets say we need name sal taxrate
        fscanf(fp,"%[^,],%d,%lf",name,&sal,&tax_rate);//as %f not having comma it directly gets recognized
        //fgets,fprintf fscanf iterate only for a line
        //fprintf can print in text in the way we want
        tax=sal*tax_rate;
        net_sal=sal-tax;
        
        fprintf(fp2,"%-20s %8d %10.2lf\n",name,sal,net_sal);
    }
    //ALL THIS TAKES PLACE IN A WHILE LOOP HENCE IT GETS EXECUTED FOR EACH NAME ...IT GETS EXECUTED
    //THE SAME NO OF TIMES AS THE NUMBER OF NAMES
        fclose(fp);
        

    }