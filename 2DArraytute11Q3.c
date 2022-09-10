#include<stdio.h>
int main(void)
{
    //declare 2D array
    float sales[5][4], sum = 0;
    int i, j;
    
    //store values
    for(i=0; i<=4; i++)
    {
        for(j=0; j<=3; j++)
        {
            printf("Enter dollar value of product %d by %d: ", i+1, j+1);
            scanf("%f", sales[i][j]);
        }
    }
    
    //calculate dollar value of each product
    for(i=0; i<=4; i++)
    {
        for(j=0; j<=3; j++)
        {
            sum = sales[i][j] + sum;
        }
        printf("%d product number .%f total dollar value\n", i+1, sum);
    }
    return 0; 
}