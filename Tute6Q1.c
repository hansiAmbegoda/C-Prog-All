//tute6Q1
#include<stdio.h>
int main(void)
{
    //declare variables
    int num;
    
    //user inputs
    printf("Input Number: ");
    scanf("%d", &num);
    
    //conditional statements
    if(num>0)
    printf("Possitive");
    
    else if(num=0)
    printf("Zero");
    
    else
    printf("Negative");
    
    return 0;
}