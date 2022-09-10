//tute6Q7
#include<stdio.h>
int main(void)
{
    //declare variables
    int empCat;
    float bonus;
    int basicSal;
    
    //user inputs
    printf("Enter the employee category: ");
    scanf("%d", &empCat);
    
    printf("Enter Your Basic Salary: ");
    scanf("%d", &basicSal);
    
    //conditional statement
    if (empCat == 1)
    {
        bonus = basicSal* 0.05;
        printf("Bonus: %.2f", bonus);
    }
    else if(empCat==2)
    {
        bonus = basicSal* 0.10;
        printf("Bonus: %.2f", bonus);
    }
    else if(empCat==3)
    {
        bonus = basicSal* 0.15;
        printf("Bonus: %.2f", bonus);
    }
    return 0;
}