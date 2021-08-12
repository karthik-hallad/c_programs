#include <stdio.h>
//using a instead of what is actually declared
int main()
{
    int mat1[10][10], mat2[10][10], res[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter the rows and colums of matrix 1: \n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the rows and colums of matrix 2: \n");
    scanf("%d%d", &r2, &c2);
    while (r2 != c1)
    {
        printf("Sorry!! The colums of first matrix and rows of second matrix are not equal");
        printf("Enter the rows and colums of matrix 1: \n");
        scanf("%d %d", &r1, &c1);
        printf("Enter the rows and colums of matrix 2: \n");
        scanf("%d %d", &r2, &c2);
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter the rows and colums of matrix 1 element %d%d ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter the rows and colums of matrix 1 element %d%d ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
    //vvimp here res is assigned with r1 and c2 as it is final
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            res[i][j] = 0;
        }
    }
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                res[i][j] = mat1[i][k] * mat2[k][j];
            }
        }
    }
    //here also it is not r2 and c1
    printf("The output matrix is \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            //forgort to add \t and \n\n
            printf("%d\t", res[i][j]);
            if (c2 - 1 == j)
                printf("\n\n");
        }
    }
}