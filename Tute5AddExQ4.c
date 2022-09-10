//additional exercise
#include<stdio.h>
int main(void)
{
    //declare variables
    float weight;
    float height;
    float bmi = 0;
    
    //user inputs
    printf("Enter your weight(KG): ");
    scanf("%f", &weight);
    
    printf("Enter your height (Meter): ");
    scanf("%f", &height);
    
    //calculation
    bmi = weight/(height*2);
    
    //display output
    printf("BMI: %.2f", bmi);
    
    return 0;
}