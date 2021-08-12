#include <stdio.h>

typedef struct
{
    int rollno;
    char name[20];
    int marks[3];
} stud;

int main()
{
    int n, i, j, tavg, highest, a, b;
    //forgot to say stud s[20] instead said stud[20]
    stud s[20];
    printf("Enter the numeber of students:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of student %d : \n", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the roll numnbr of student %d :\n", i + 1);
        scanf("%d", &s[i].rollno);
        printf("Enter the marks  of student %d :\n", i + 1);
        scanf("%d %d %d", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);
    }
    printf("Enter the roll no to be found: ");
    scanf("%d", &a);
    for (i = 0; i < n; i++)
    {
        if (s[i].rollno == a)
            break;
        else
            continue;
    }
    //remember to define a variable called b here and assign it a value of i
    b = i;
    printf("\n");
    //forgot to add s[b].rollno;
    printf("The name of the student with roll no %d is: %s\n", s[b].rollno, s[b].name);
    printf("The marks of the student with roll no %d is : %d %d %d\n", s[b].rollno, s[b].marks[0], s[b].marks[1], s[b].marks[2]);

    for (i = 0; i < n; i++)
    {
        tavg = (s[i].marks[0] + s[i].marks[1] + s[i].marks[2]) / 3;
        printf(" The average marks of student %d is %d\n", i + 1, tavg);
        //student 2 comes in if else loop twice
        if (s[i].marks[0] > s[i].marks[1])
        {
            if (s[i].marks[0] > s[i].marks[2])
            {
                highest = s[i].marks[0];
            }
            else
            {
                highest = s[i].marks[2];
            }
        }
        else
        {
            if (s[i].marks[1] > s[i].marks[2])
            {
                highest = s[i].marks[1];
            }
            else
            {
                highest = s[i].marks[2];
            }
        }
        //make sure to use i+1 here
        printf("The highest marks of the student %d is %d\n", i + 1, highest);
    }
}