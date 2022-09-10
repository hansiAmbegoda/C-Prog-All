//additional exercise
#include<stdio.h>
int main(void)
{
    //declare variables
    int principal, days;
    float rate;
    float interest = 0;
    
    //user inputs
    printf("Enter principal: ");
    scanf("%d", &principal);
    
    printf("Enter rate: ");
    scanf("%f", &rate);
    
    printf("Enter days: ");
    scanf("%d", &days);
    
    //calculation
    interest = principal* rate* days/365;
    
    //display output
    printf("Interest: %.2f", interest);
    
    return 0;
}