#include<stdio.h>
int main()
{
    //declare 2D arrays and store values
    int A[4][4] = {5, 7, 8, 10, 9, 3, 0, 6, 8, 1, 9, 2, 4, 7, 2, 1} ;
    int B[4][4] = {2 ,2 ,1 ,3 ,8 ,1 ,3 ,1 ,1, 2, 2, 4, 3, 1, 1, 2};
    int C[4][4], i, j;
    
    //store value in 2d arrays
    for (i=0; i<=4; i++)
    {
        for (j=0; j<=4; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    
    //display elements in 2D arrays
    for (i=0; i<=4; i++)
    {
        for (j=0; j<=4; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}