#include <stdio.h>
#define rows 3
#define cols 3
//never close the semi colons on define and include statement****************
//matrix input and add take input as mat...nowwhere something is returned...
//also we use 3x 3 while asking for input for matrix

void MatrixInput(int mat[][cols]);
//always write add to all three elements
void MatrixAdd(int mat1[][cols], int mat2[][cols], int mat3[][cols]);
void MatrixPrint(int mat[][cols]);

int main()
{
    //always define rows and cols here************
    int mat1[rows][cols], mat2[rows][cols], res[rows][cols];
    printf("Enter the elements of the matrix 1 %d x %d\n", rows, cols);
    MatrixInput(mat1);
    printf("Enter the elements of the matrix 2 %d x %d\n", rows, cols);
    MatrixInput(mat2);
    MatrixAdd(mat1, mat2, res);
    printf("The addition of above matrix gives\n");
    MatrixPrint(res);
}

void MatrixInput(int mat[][cols])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", (*(mat + i) + j));
        }
    }
}

void MatrixPrint(int mat[][cols])
{
    for (int i = 0; i < 3; i++)
    {
        //dont write i instead of j
        for (int j = 0; j < 3; j++)
        {
            //make sure to follow this pattern to print as req
            printf("%d\t", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

void MatrixAdd(int mat[][cols], int mat2[][cols], int mat3[][cols])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(mat3 + i) + j) = (*(*(mat2 + i) + j)) + (*(*(mat + i) + j));
        }
    }
}